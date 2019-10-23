
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
# include <sys/types.h>
# include <sys/wait.h>

typedef struct	s_shell
{
	char 		*prompt;
	int			in_bin;
	char 		**env;
	char 		**pathv;
}				t_shell;


char			*enhance_command(char **command_ptr, char c);
char			*command_renew(char **command, int to_free, t_shell *shell);

char			*ft_strchr(const char *s, int c);
int				ft_strcmp(const char *s11, const char *s22);
int				ft_strlen(const char *src);
char			**ft_strsplit(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2, int to_free);
void			ft_putstr(char const *str, int new_str);
char			**ft_free_split(char **d, int crash);
char			*ft_strrenew(char **str_ptr, const char *new_str, int to_free);
char			*ft_strstr(const char *s1, const char *s2);

void			ft_echo(char **args);
void			ft_colour(char **a);

void			*on_crash(int err);

#endif
