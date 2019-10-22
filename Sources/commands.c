#include "../Includes/minishell.h"

char			*enhance_command(char **command_ptr, char c)
{
	int			i;
	char		*new_command;
	char		*command;

	command = *command_ptr;
	if (!(new_command = malloc(ft_strlen(*command_ptr) + 2)))
		return (on_crash(MALLOC_ERR));
	i = -1;
	while (command[++i])
		new_command[i] = command[i];
	new_command[i++] = c;
	new_command[i] = '\0';
	free(*command_ptr);
	*command_ptr = NULL;
	return (new_command);
}

char			*command_renew(char **command, int to_free, t_shell *shell)
{
	char		*ret;

	if (to_free)
		free(*command);
	if (!(ret = malloc(sizeof(char))))
		return (on_crash(MALLOC_ERR));
	ret[0] = '\0';
	ft_putstr(shell->prompt);
	return (ret);
}
