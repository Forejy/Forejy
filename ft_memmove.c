#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = dest;
	s = src;
	if (s > d)
		while (*s && n--)
			*d++ = *s++;
	else
	{
		d += n;
		s += n;
		while (*s && n--)
			*d-- = *s--;
	}
	return (dest);
}