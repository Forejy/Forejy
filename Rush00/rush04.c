/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 13:56:23 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/10 14:40:55 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	topbottom(int a, int bot)
{
	int x;

	x = 1;
	while (x <= a)
	{
		if (x > 1 && x < a)
			ft_putchar('B');
		if (x == 1)
			ft_putchar('A' + bot);
		if (x == a)
			ft_putchar('C' - bot);
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
	int bot;

	x = 1;
	y = 1;
	while (x <= a && y <= b)
	{
		if (y == 1)
			topbottom(a, bot);
		bot = 2;
		if (y == b)
			topbottom(a, bot);
		else
			middle(a);
		y++;
	}
}
