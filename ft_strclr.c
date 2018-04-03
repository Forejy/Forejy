#include "libft.h"

void ft_strclr(char *s)
{
	ft_memset(s, 0, (size_t)ft_strlen(s));
}