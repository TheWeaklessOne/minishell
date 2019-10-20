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

int 			check_command(char *command)
{
	int			res;

	res = !(ft_strcmp(command, "ls") && ft_strcmp(command, "pwd"));
	if (!res)
	{
		ft_putstr("minishell: command not found: ");
		ft_putstr(command);
		write(1, "\n", 1);
	}
	(!ft_strcmp(command, "clear")) ? system("clear") : 0;
	return (res);
}

void			do_command(char *command)
{
	char		**args;
	pid_t		pid;

	args = ft_strsplit(command, ' ');
	if (check_command(args[0]))
		if (!(pid = fork()))
		{
			args[0] = ft_strjoin("/bin/", args[0], 2);
			execv(args[0], args);
			free(args);
		}
	wait(&pid);
}

int				main(int ac, char *av[])
{
	char		*command;
	char		c;

	system("clear");
	command = command_renew(&command, 0);
	while (read(1, &c, 1) && c != 'q')
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
