/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 22:17:45 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/28 21:22:02 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft_opp.h"

int		ft_add(int x, int y)
{
	return (x + y);
}

int		ft_check(char **av)
{
	if ((ft_strcmp(g_opptab[3].str, av[2]) == 0) && (ft_atoi(av[3])) == 0)
	{
		ft_putstr("Stop : division by zero");
		return (1);
	}
	if ((ft_strcmp(g_opptab[4].str, av[2]) == 0) && (ft_atoi(av[3])) == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (1);
	}
	return (0);
}

int		ft_advanced_do_op(char **av)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (ft_check(av) == 1)
		return (0);
	while (++i < 5)
	{
		if (ft_strcmp(av[2], g_opptab[i].str) == 0)
		{
			ft_putnbr(g_opptab[i].f(ft_atoi(av[1]), ft_atoi(av[3])));
			j = 1;
		}
	}
	if (j == 0)
		g_opptab[5].f(ft_atoi(av[1]), ft_atoi(av[3]));
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (ac > 1)
	{
		ft_advanced_do_op(av);
		ft_putchar('\n');
	}
	return (0);
}
