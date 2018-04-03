#include "libft.h"

void * ft_memalloc(size_t size)
{
	void * memalloc;

	if (!(memalloc = (void *)malloc(size)))
		return (void *)0;
	ft_memset(memalloc, 0, size);
}