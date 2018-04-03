#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
		const unsigned char *str1;
		const unsigned char *str2;

		while (n--)
			if (*str1++ != *str2++)
				return (*--str1 - *--str2);
		return (0);
}
