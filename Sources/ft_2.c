#include "../Includes/minishell.h"

char			*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (!ft_strlen(s2))
		return ((char *)s1);
	while (i < ft_strlen(s1))
	{
		if (!ft_strncmp((char *)s1 + i, s2, ft_strlen(s2)))
			return (((char *)s1 + i));
		i++;
	}
	return (NULL);
}
