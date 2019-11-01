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

void			my_int(void)
{
	ft_putstr("\n⇢  ", 0);
}

int				main(int ac, char *av[], char *envp[])
{
	char		*command;
	int			c;
	t_shell		shell;
	char		**comv;

	system("clear");
	signal(SIGINT, (void*)my_int);
	shell_init(&shell, envp);
	command = command_renew(&command, 0, &shell);
	while (read(1, &c, 1))
	{
		if (c == '\n' && (c = -1))
		{
			comv = ft_strsplit(command, ';');
			while (comv[++c])
				do_command(comv[c], &shell);
			command = command_renew(&command, 1, &shell);
			ft_free_split(comv, 0);
		}
		else
			command = enhance_command(&command, c);
	}
	ac++;
	av++;
	exit(0);
}
