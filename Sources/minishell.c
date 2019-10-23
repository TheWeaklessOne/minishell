/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wstygg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:51:03 by wstygg            #+#    #+#             */
/*   Updated: 2019/10/20 18:32:16 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minishell.h"

int 			check_unstandart(char **args)
{
	int			res;

	res = 5;
	(!ft_strcmp(args[0], "clear")) ? system("clear") : res--;
	(!ft_strcmp(args[0], "exit")) ? exit(0) : res--;
	(!ft_strcmp(args[0], "echo")) ? ft_echo(args) : res--;
	(!ft_strcmp(args[0], "colour")) ? ft_colour(args) : res--;
	(!ft_strcmp(args[0], "color")) ? ft_colour(args) : res--;
	return (!res);
}

int 			check_command(char **args, t_shell *shell)
{
	int			res;

	if ((res = check_unstandart(args)))
	{
		if ((res = !(ft_strcmp(args[0], "/bin/ls") && ft_strcmp(args[0], "/bin/pwd"))))
			shell->in_bin = 1;
		else
		{
			res = !(ft_strcmp(args[0], "ls") && ft_strcmp(args[0], "pwd"));
			if (!res)
			{
				ft_putstr("minishell: command not found: ", 0);
				ft_putstr(args[0], 1);
			}
			else
				shell->in_bin = 0;
		}
	}
	return (res);
}

void			do_command(char *command, t_shell *shell)
{
	char		**args;
	pid_t		pid;

	args = ft_strsplit(command, ' ');
	if (args && *args && check_command(args, shell))
		if (!(pid = fork()))
		{
			args[0] = ft_strjoin("/bin/", args[0], 2);
			execv(args[0], args);
		}
	ft_free_split(args, 0);
	wait(&pid);
}

char 			*parse_env(char *str, t_shell *shell)
{
	int 		i;

	i = -1;
	str = ft_strjoin(str, "=", 1);
	while (shell->env[++i])
		if (ft_strstr(shell->env[i], str))
			return (shell->env[i] + ft_strlen(str));
	return (NULL);
}

void			shell_init(t_shell *shell, char *envp[])
{
	int 		i;

	i = 0;
	shell->prompt = ft_strrenew(&shell->prompt, "$> ", 0);
	shell->in_bin = 0;
	while (envp[i])
		i++;
	if (!(shell->env = malloc(sizeof(char*) * i)))
		on_crash(MALLOC_ERR);
	i = -1;
	while (envp[++i])
		shell->env[i] = ft_strrenew(NULL, envp[i], 0);

}

#include "stdio.h"

int				main(int ac, char *av[], char *envp[])
{
	char		*command;
	char		c;
	t_shell		shell;
	char 		**comv;

	system("clear");
	shell_init(&shell, envp);
//	command = command_renew(&command, 0, &shell);
	printf("%s\n", parse_env("TEMP", &shell));
//	while (read(1, &c, 1))
//	{
//		if (c == '\n' && (c = -1))
//		{
//			comv = ft_strsplit(command, ';');
//			while (comv[++c])
//				do_command(comv[c], &shell);
//			command = command_renew(&command, 1, &shell);
//			ft_free_split(comv, 0);
//		}
//		else
//			command = enhance_command(&command, c);
//	}
}
