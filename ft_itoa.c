#include "libft.h"

unsigned int pow_10(unsigned int n)
{
	unsigned int i = 1;
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	return(i);
}

char * ft_itoa(int n)
{
	size_t len_str;
	size_t sign;
	char *str_int;
	unsigned int n_;


	sign = 0;
	if (n < 0)
	{
		n_ = -n;
		sign = 1;
	}
	else
		n_ = n;
	len_str = pow_10(n_) + sign;
	if (!(str_int = ft_strnew(len_str + 1)))
		return ((void *)0);

	if (n_ == 0)
		str_int[0] = '0';
	if (sign == 1)
		str_int[0] = '-';

	while (n_ > 0)
	{
		str_int[len_str-- - 1] = (n_ % 10) + '0';
		n_ = n_ / 10;
	}
	return (str_int);

}