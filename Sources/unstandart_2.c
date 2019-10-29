/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unstandart_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wstygg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 19:17:04 by wstygg            #+#    #+#             */
/*   Updated: 2019/10/25 19:17:05 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minishell.h"

void			ft_echo(char **args, t_shell *shell)
{
	int			i;
	int			n;
	char		*str;

	n = (args[1] && !ft_strcmp(args[1], "-n"));
	i = 1 + n;
	while (args[i])
	{
		if (ft_strchr(args[i], '$'))
			str = parse_env(args[i] + 1, shell, 0);
		else
			str = ignore_quotation(args[i], 0);
		ft_putstr(str, 0);
		if (args[i + 1])
			write(1, " ", 1);
		(!ft_strchr(args[i], '$')) ? free(str) : 0;
		i++;
	}
	if (!n)
		write(1, "\n", 1);
}
