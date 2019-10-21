
#ifndef MINISHELL_H
# define MINISHELL_H

# define PROMPT "$> "

# define MALLOC_ERR 1
# define NULL_ERR 2

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>


char			*enhance_command(char **command_ptr, char c);
char			*command_renew(char **command, int to_free);


int				ft_strcmp(const char *s11, const char *s22);
int				ft_strlen(const char *src);
char			**ft_strsplit(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2, int to_free);
void			ft_putstr(char const *str);
char			**ft_free_split(char **d, int crash);

void			ft_echo(char **args);


void			*on_crash(int err);

#endif
