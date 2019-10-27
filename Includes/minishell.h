/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wstygg <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:55:51 by wstygg            #+#    #+#             */
/*   Updated: 2019/10/25 18:55:53 by wstygg           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# define MALLOC_ERR 1
# define NULL_ERR 2

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"
# define VIOLET "\033[1;35m"
# define RESET "\033[0m"

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/types.h>
# include <sys/wait.h>

# include "list.h"

typedef struct		s_shell
{
	char			*prompt;
	t_list			*env_lst;
	t_list			*path_lst;
	t_list			*path;
	t_list			*lst_parse;
}					t_shell;

int					is_unstandart(char **args, t_shell *shell);
char				*enhance_command(char **command_ptr, char c);
char				*command_renew(char **command, int to_free, t_shell *shell);
void				do_command(char *command, t_shell *shell);

char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s11, const char *s22);
int					ft_strlen(const char *src);
char				**ft_strsplit(char const *s, char c);
char				*ft_strjoin(char const *s1, char const *s2, int to_free);
void				ft_putstr(char const *str, int new_str);
char				**ft_free_split(char **d, int crash);
char				*ft_strrenew(char **str_ptr, const char *new_str, int to_free);
char				*ft_strstr(const char *s1, const char *s2);
char 				*ignore_quotation(char *str, int to_free);

void				ft_echo(char **args, t_shell *shell);
void				ft_colour(char **a);
void				ft_name(t_shell *shell);
void				ft_env(t_shell *shell);

void				shell_init(t_shell *shell, char *envp[]);
void				path_init(t_shell *shell);

char				*parse_env(char *str, t_shell *shell, int to_free);
void				ft_unsetenv(char **args, t_shell *shell);
void				ft_setenv(char **args, t_shell *shell);

void				*on_crash(int err);

#endif
