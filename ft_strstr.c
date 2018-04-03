#include "libft.h"

char *ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
			if (!(ft_strncmp(str, to_find, ft_strlen(to_find))))
				return (str);
		str++;
	}
	return (0);
}