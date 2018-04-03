#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
	//Converts the value ch to unsigned char and copies it into each of the first count characters
	// of the object pointed to by dest. If the object is not trivially-copyable
	// (e.g., scalar, array, or a C-compatible struct), the behavior is undefined.
	// If n is greater than the size of the object pointed to by dest, the behavior is undefined.

	unsigned char *str = s;
	while (n)
	{
		*str++ = (unsigned char)c;
		n--;
	}
	return (s);
}