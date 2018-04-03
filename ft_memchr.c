#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	if (n)
	{
		const char *str;

		str = s;
		while (n--)
			if (*str++ == c)
				return ((void *)(str - 1));
	}
	return ((void *)0);
}
