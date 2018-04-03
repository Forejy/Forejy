#include "libft.h"

void *memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char cc = c;
	const unsigned char *s1;
	unsigned char *s2;

	s1 = src;
	s2 = dest;
	while(n-- && *s1 != cc)
	{
		*s2++ = *s1++;
	}

	if(*s1 == cc)
	{
		*s2++ = *s1++;
		return  (s2);
	}
	else return ((void *)0);


}