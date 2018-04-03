#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
	char *strjoin;
	char *begin;

	if (!(strjoin = ft_strnew((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (void *)0;
	begin = strjoin;
	while (*s1)
		*strjoin++ = *s1++;
	while (*s2)
		*strjoin = *s2++;
	*strjoin = '\0';
	return (begin);
}