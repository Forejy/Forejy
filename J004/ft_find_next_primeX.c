/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 15:57:21 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/12 16:00:56 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

int		ft_sqrt(int nb)
{
	int	i;

	i = 3;
	while (i * i <= nb && i <= 46340)
	{
		i++;
	}
	return (i);
}

int		ft_is_prime(int nb)
{
	int i;
	int rac;

	i = 3;
	rac = ft_sqrt(nb);
	while (i < rac)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 2));
}

int		main(void)
{
	printf("%d\n", ft_find_next_prime(2147483630));
	printf("%d\n", ft_find_next_prime(-10000000));
	return (0);
}
