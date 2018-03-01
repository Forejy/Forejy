/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 13:56:23 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/24 17:24:10 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/jmarques/Documents/Rush02/includes/header.h"

void	topbottom(int a)
{
	int x;

	x = 1;
	while (x <= a)
	{
		if (x > 1 && x < a)
			ft_putchar('B');
		if (x == 1)
			ft_putchar('A');
		if (x == a)
			ft_putchar('C');
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
			ft_putchar('B');
		x++;
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int x;
	int y;

	x = 1;
	y = 1;
	while (x <= a && y <= b)
	{
		if (y == 1)
			topbottom(a);
		if (y == b)
			topbottom(a);
		else
			middle(a);
		y++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
