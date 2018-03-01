/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 18:37:11 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/11 10:16:26 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}

int		main(void)
{
	int time = 0;

	time = clock();
	printf("%d", ft_iterative_factorial(6));
	printf("\n");
	printf("%d", ft_iterative_factorial(10));
	printf("\n");
	printf("%d", ft_iterative_factorial(0));
	printf("\n");
	printf("%d", ft_iterative_factorial(-5));
	printf("\n");
	printf("%d", ft_iterative_factorial(50));

	printf("\n%d ms", time);
	return (0);
}
