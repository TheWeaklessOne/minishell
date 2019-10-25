/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wstygg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:57:10 by wstygg            #+#    #+#             */
/*   Updated: 2019/10/25 18:57:11 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minishell.h"

int				is_unstandart(char **args, t_shell *shell)
{
	int			res;

	res = 7;
	(!ft_strcmp(args[0], "clear")) ? system("clear") : res--;
	(!ft_strcmp(args[0], "exit")) ? exit(0) : res--;
	(!ft_strcmp(args[0], "echo")) ? ft_echo(args) : res--;
	(!ft_strcmp(args[0], "colour")) ? ft_colour(args) : res--;
	(!ft_strcmp(args[0], "color")) ? ft_colour(args) : res--;
	(!ft_strcmp(args[0], "user")) ? ft_name(shell) : res--;
	(!ft_strcmp(args[0], "env")) ? ft_env(shell) : res--;
	return (res);
}

int				check_command(char **args, t_shell *shell)
{
	char		*path;
	int			i;

	i = -1;
	if (access(args[0], 1))
	{
		while (shell->pathv[++i])
		{
			path = ft_strjoin(shell->pathv[i], args[0], 0);
			if (!access(path, 1))
				shell->pathv_it = i;
			free(path);
		}
		return (shell->pathv_it);
	}
	else
		shell->pathv_it = -1;
	return (1);
}

void			do_command(char *command, t_shell *shell)
{
	char		**args;
	pid_t		pid;

	args = ft_strsplit(command, ' ');
	if (args && *args && !is_unstandart(args, shell))
	{
		if (check_command(args, shell))
		{
			if (!(pid = fork()))
			{
				if (shell->pathv_it != -1)
					args[0] = ft_strjoin(shell->pathv[shell->pathv_it],
							args[0], 2);
				execv(args[0], args);
			}
		}
		else
		{
			ft_putstr("minishell: command not found: ", 0);
			ft_putstr(args[0], 1);
		}
	}
	ft_free_split(args, 0);
	shell->pathv_it = 0;
	wait(&pid);
}

char			*enhance_command(char **command_ptr, char c)
{
	int			i;
	char		*new_command;
	char		*command;

	command = *command_ptr;
	if (!(new_command = malloc(ft_strlen(*command_ptr) + 2)))
		return (on_crash(MALLOC_ERR));
	i = -1;
	while (command[++i])
		new_command[i] = command[i];
	new_command[i++] = c;
	new_command[i] = '\0';
	free(*command_ptr);
	*command_ptr = NULL;
	return (new_command);
}

char			*command_renew(char **command, int to_free, t_shell *shell)
{
	char		*ret;

	if (to_free)
		free(*command);
	if (!(ret = malloc(sizeof(char))))
		return (on_crash(MALLOC_ERR));
	ret[0] = '\0';
	ft_putstr(shell->prompt, 0);
	return (ret);
}
