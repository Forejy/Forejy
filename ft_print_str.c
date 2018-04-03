#include "libft.h"




void ft_putaddress(int *nb)
{
	unsigned int nbr;

	nbr = *nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}


	if (nbr > 10)
	{
		ft_putnbr((nbr / 10) - '0');
		ft_putchar((nbr % 10) - '0');
	}
	if (nbr <= 9)

		ft_putchar((nbr % 10) - '0');
}
