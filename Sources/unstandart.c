/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unstandart.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wstygg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:54:18 by wstygg            #+#    #+#             */
/*   Updated: 2019/10/22 16:54:20 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minishell.h"

void		ft_env(t_shell *shell)
{
	int		i;

	i = -1;
	while (shell->env[++i])
		ft_putstr(shell->env[i], 1);
}

void		ft_name(t_shell *shell)
{
	if (parse_env("USER", shell, 0))
		shell->prompt = ft_strjoin(ft_strrenew(&shell->prompt,
				parse_env("USER", shell, 0), 1), "% ", 1);
	else
		ft_putstr("An error occurred", 1);
}

void		ft_echo(char **args)
{
	int		i;
	int		j;
	int		n;

	n = (args[1] && !ft_strcmp(args[1], "-n"));
	i = 1 + n;
	while (args[i])
	{
		j = -1;
		while (args[i][++j])
			if (args[i][j] != '\'' && args[i][j] != '\"')
				write(1, args[i] + j, 1);
		if (args[i + 1])
			write(1, " ", 1);
		i++;
	}
	if (!n)
		write(1, "\n", 1);
}

void		ft_put_colour_usage(void)
{
	ft_putstr("usage: colour|color [-*name*]", 1);
	ft_putstr("    colours: ", 1);
	ft_putstr(RED, 0);
	ft_putstr("\tred", 1);
	ft_putstr(GREEN, 0);
	ft_putstr("\tgreen", 1);
	ft_putstr(YELLOW, 0);
	ft_putstr("\tyellow", 1);
	ft_putstr(BLUE, 0);
	ft_putstr("\tblue", 1);
	ft_putstr(VIOLET, 0);
	ft_putstr("\tviolet", 1);
	ft_putstr(RESET, 0);
	ft_putstr("\treset - return to default colour", 1);
}

void		ft_colour(char **a)
{
	int		flag;

	flag = 6;
	if (!a[1])
	{
		ft_put_colour_usage();
		return ;
	}
	(!ft_strcmp(a[1], "-red")) ? ft_putstr(RED, 0) : (flag--);
	(!ft_strcmp(a[1], "-green")) ? ft_putstr(GREEN, 0) : (flag--);
	(!ft_strcmp(a[1], "-yellow")) ? ft_putstr(YELLOW, 0) : (flag--);
	(!ft_strcmp(a[1], "-blue")) ? ft_putstr(BLUE, 0) : (flag--);
	(!ft_strcmp(a[1], "-violet")) ? ft_putstr(VIOLET, 0) : (flag--);
	(!ft_strcmp(a[1], "-reset")) ? ft_putstr(RESET, 0) : (flag--);
	if (!flag)
		ft_put_colour_usage();
}
