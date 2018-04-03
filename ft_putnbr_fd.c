#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -n;
	}
	else
		nbr = n;

	if (nbr > 10)
	{
		ft_putnbr_fd((nbr / 10) - '0', fd);
		ft_putchar_fd((nbr % 10) - '0', fd);
	}
	if (nbr <= 9)

		ft_putchar_fd((nbr % 10) - '0', fd);
}