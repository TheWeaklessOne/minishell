#include "../Includes/minishell.h"

void		ft_echo(char **args)
{
	int		i;
	int		n;

	n = (args[1] && !ft_strcmp(args[1], "-n"));
	i = 1 + n;
	while (args[i])
	{
		ft_putstr(args[i]);
		if (args[i + 1])
			write(1, " ", 1);
		i++;
	}
	if (!n)
		write(1, "\n", 1);
}