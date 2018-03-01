/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 12:39:35 by rcarton           #+#    #+#             */
/*   Updated: 2018/02/24 16:56:33 by rcarton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_atoi(char *str);

void	usefull(char a, char b, char c, int x)
{
	int y;

	y = 0;
	while (y++ < x)
	{
		if (y == 1)
			ft_putchar(a);
		else if (y == x)
			ft_putchar(c);
		else
			ft_putchar(b);
	}
	ft_putchar('\n');
}

void	colle01(int x, int y)
{
	int a;

	a = 0;
	while (a++ < y)
	{
		if (a == 1)
			usefull('/', '*', '\\', x);
		else if (a == y)
			usefull('\\', '*', '/', x);
		else
			usefull('*', ' ', '*', x);
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
		colle01(x, y);
	}
	return (0);
}
