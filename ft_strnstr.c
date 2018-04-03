#include "libft.h"

char *ft_strnstr(char *str, char *to_find, int n)
{
	if (!*to_find)
		return (str);
	while (*str && (n >= ft_strlen(to_find)))
	{
		if (*str == *to_find)
			if (!(ft_strncmp(str, to_find, n)))
				return (str);
		str++;
		n--;
	}
	return ((void *)0);
}