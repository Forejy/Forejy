/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 10:31:02 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/11 10:39:55 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int		main(void)
{
	int time = 0;

	time = clock();
	printf("%d", ft_recursive_factorial(6));
	printf("\n");
	printf("%d", ft_recursive_factorial(10));
	printf("\n");
	printf("%d", ft_recursive_factorial(15));
	printf("\n");
	printf("%d", ft_recursive_factorial(-5));
	printf("\n");
	printf("%d", ft_recursive_factorial(50));
	printf("\n%d ms", time);
	return (0);
}
