#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	char *str;

	if (!(str = ft_strnew(ft_strlen(s))))
		return ((void *)0);
	while (*s)
		*str++ = f(*s++);
}