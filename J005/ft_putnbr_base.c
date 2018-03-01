/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:58:32 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/21 19:00:21 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}


unsigned int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int		verifier_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || (base[i] >= 0 && base[i] <= 31)
			|| base[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

void		ft_putnbr_base(int nbr, char *base)
{
	unsigned int len_base;
	unsigned int reste;
	unsigned int nb;

	nb = nbr;
	len_base = ft_strlen(base);
	reste = nb % len_base;
	if (verifier_base(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= len_base)
		{
			ft_putnbr_base((nb / len_base), base);
			ft_putchar(base[reste]);
		}
		else
			ft_putchar(base[nb]);
	}
}

int main(int argc, char **argv)
{
	if (argc)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}

