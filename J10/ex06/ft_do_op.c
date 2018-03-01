/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 22:17:45 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/26 19:35:45 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	fuck_the_norm(t_opp *tab)
{
	tab[0].str = '+';
	tab[0].f = &ft_add;
	tab[1].str = '-';
	tab[1].f = &ft_sub;
	tab[2].str = '*';
	tab[2].f = &ft_mult;
	tab[3].str = '/';
	tab[3].f = &ft_div;
	tab[4].str = '%';
	tab[4].f = &ft_mod;
}

int		do_op(char **av)
{
	t_opp	tab[5];
	int		i;

	i = -1;
	fuck_the_norm(tab);
	if (av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '/' && av[2][0]
			!= '%' && av[2][0] != '*')
		ft_putnbr(0);
	if (av[2][0] == '/' && (ft_atoi(av[3])) == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	if ((av[2][0] == '%') && (ft_atoi(av[3])) == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	while (++i < 5)
		if (av[2][0] == tab[i].str)
			ft_putnbr(tab[i].f(ft_atoi(av[1]), ft_atoi(av[3])));
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (ac > 1)
	{
		do_op(av);
		ft_putchar('\n');
	}
	return (0);
}
