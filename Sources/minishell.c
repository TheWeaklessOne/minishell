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

	res = 3;
	(!ft_strcmp(args[0], "clear")) ? system("clear") : res--;
	(!ft_strcmp(args[0], "exit")) ? exit(0) : res--;
	(!ft_strcmp(args[0], "echo")) ? ft_echo(args) : res--;
	return (!res);
}

int 			check_command(char **args)
{
	int			res;

	if ((res = check_unstandart(args)))
	{
		res = !(ft_strcmp(args[0], "ls") && ft_strcmp(args[0], "pwd"));
		if (!res)
		{
			ft_putstr("minishell: command not found: ");
			ft_putstr(args[0]);
			write(1, "\n", 1);
		}
	}
	return (res);
}

void			do_command(char *command)
{
	char		**args;
	pid_t		pid;

	args = ft_strsplit(command, ' ');
	if (args && *args && check_command(args))
		if (!(pid = fork()))
		{
			args[0] = ft_strjoin("/bin/", args[0], 2);
			execv(args[0], args);
		}
	ft_free_split(args, 0);
	wait(&pid);
}

int				main(int ac, char *av[])
{
	char		*command;
	char		c;

	system("clear");
	command = command_renew(&command, 0);
	while (read(1, &c, 1))
	{
		if (c == '\n')
		{
			do_command(command);
			command = command_renew(&command, 1);
		}
		else
			command = enhance_command(&command, c);
	}
}
