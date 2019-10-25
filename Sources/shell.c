/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wstygg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 19:02:31 by wstygg            #+#    #+#             */
/*   Updated: 2019/10/25 19:02:34 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/minishell.h"

void			shell_init(t_shell *shell, char *envp[])
{
	int			i;

	i = 0;
	shell->pathv_it = 0;
	shell->prompt = ft_strrenew(&shell->prompt, "$> ", 0);
	while (envp[i])
		i++;
	if (!(shell->env = malloc(sizeof(char*) * i)))
		on_crash(MALLOC_ERR);
	i = -1;
	while (envp[++i])
		shell->env[i] = ft_strrenew(NULL, envp[i], 0);
	shell->pathv = ft_strsplit(parse_env("PATH", shell, 0), ':');
	i = -1;
	while (shell->pathv[++i])
		shell->pathv[i] = ft_strjoin(shell->pathv[i], "/", 0);
}
