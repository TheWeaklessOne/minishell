/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wstygg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:57:14 by wstygg            #+#    #+#             */
/*   Updated: 2019/10/25 18:57:16 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minishell.h"

char			*parse_env(char *str, t_shell *shell, int to_free)
{
	int			i;

	i = -1;
	str = ft_strjoin(str, "=", to_free);
	while (shell->env[++i])
		if (ft_strstr(shell->env[i], str))
			return (shell->env[i] + ft_strlen(str));
	return (NULL);
}
