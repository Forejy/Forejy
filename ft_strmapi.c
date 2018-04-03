#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;

	if (!(str = ft_strnew(ft_strlen(s))))
		return ((void *)0);
	i = 0;
	while (s[i])
	{
		*str++ = f(i, s[i++]);
	}
}