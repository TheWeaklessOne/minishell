#include "../Includes/minishell.h"

void		*on_crash(int err)
{
	(err == MALLOC_ERR) ? ft_putstr("Malloc error\n") : 0;
	exit(err);
}