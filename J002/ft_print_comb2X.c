/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:53:00 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/09 12:37:44 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * nb);
	}
	if (nb >= 10 && nb < 100)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2_condition(int nb1, int nb2)
{
	if (nb1 < 10)
	{
		ft_putchar(48);
	}
	ft_putnbr(nb1);
	ft_putchar(' ');
	if (nb2 < 10)
	{
		ft_putchar(48);
	}
	ft_putnbr(nb2);
	if (!(nb1 == 98 && nb2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 < 99)
	{
		nb2 = nb1 + 1;
		while (nb2 < 100)
		{
			ft_print_comb2_condition(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
