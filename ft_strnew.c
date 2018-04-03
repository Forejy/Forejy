#include "libft.h"

char * ft_strnew(size_t size)
{
	char * str;

	if (!(str = (char *)malloc(sizeof(char) * size)))
		return ((void *)0);
	ft_memset(str, 0, size);
}