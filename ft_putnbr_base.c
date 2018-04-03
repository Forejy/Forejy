#include "libft.h"

unsigned int len_base(char *base)
{
	int i;

	i = 0;
	while(base[i])
		i++;
	return (i);

}

int base_is_valid(char *base, int len)
{
	int i;
	int j;

	i = 0;
	if (len <= 1)
		return (0);

	while ( i < len - 1)
	{
		j = i + 1;
		while (j < len)
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	while (*base)
		if (*base == '+' || *base++ == '-')
			return (0);
	return (1);
}


void ft_putnbr_base(int nbr, char *base)
{
	unsigned int nb;
	unsigned int len;

	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb   = -nb;
	}

	len = len_base(base);

	if (base_is_valid(base, len))
	{

		if (nb >= len)
		{
			ft_putnbr_base((nb / len), base);
			ft_putchar(base[nb % len]);
		}
		if (nb < len)
		{
			ft_putchar(base[nb]);
		}
	}
}

void ft_putnbr_base_addr(int *nbr, char *base)
{
	unsigned int nb;
	unsigned int len;

	nb = *nbr;

	ft_putnbr_base(nb, "0123456789abcdef");

/*	if (nb < 0)
	{
		ft_putchar('-');
		nb   = -nb;
	}

	len = len_base(base);

	if (base_is_valid(base, len))
	{

		if (nb >= len)
		{
			ft_putnbr_base_addr((nb / len), base);
			ft_putchar(base[nb % len]);
		}
		if (nb < len)
		{
			ft_putchar(base[nb]);
		}
	}*/
}