#include "libft.h"
void *memcpy(void *dest, const void *src, size_t n)
{
	char *temp;

	if ((dest = (void *)0) || (src = (void *)0))
		return ((void *)0);
	temp = dest;
	while(n--)
	{
		*temp++ = *(char *)src;
	}
	return (dest);
}

