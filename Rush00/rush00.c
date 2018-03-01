/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 09:54:23 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/25 19:22:48 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/ft_colle.h"

void	top(int a)
{
	int x;

	x = 1;
	while (x <= a)
	{
		if (x > 1 && x < a)
			ft_putchar('-');
		else
			ft_putchar('o');
		x++;
	}
	ft_putchar('\n');
}

void	middle(int a)
{
	int x;

	x = 1;
	while (x <= a)
	{
		if (x > 1 && x < a)
			ft_putchar(' ');
		else
			ft_putchar('|');
		x++;
	}
	ft_putchar('\n');
}

void	rush00(int a, int b)
{
	int x;
	int y;

	x = 1;
	y = 1;
	while (x <= a && y <= b)
	{
		if (y == 1 || y == b)
			top(a);
		else
			middle(a);
		y++;
	}
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (argc == 3)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
		rush00(x, y);
	}
	return (0);
}


