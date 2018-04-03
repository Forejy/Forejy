#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *strsub;
	unsigned int i;

	if (!(strsub = ft_strnew(len)))
		return (void *)0;
	i = start;
	while (s[i])
		*strsub++ = s[i++];
	return (strsub);
}