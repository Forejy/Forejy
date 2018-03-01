/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 09:54:23 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/24 18:39:35 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
int		ft_atoi(char *str);

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

void	rush(int a, int b)
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
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
