/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 21:30:55 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/28 11:30:11 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sort(int a, int b)
{
	if (a < b)
		return (-1);
	if (a > b)
		return (1);
	else
		return (0);
}

int (*f)(int, int) = &ft_sort;

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int	unsort;

	unsort = 0;
	i = 0;
	while (i <= length - 2 && unsort != 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
				unsort = 1;
		i++;
	}
	if (unsort == 0)
		return (1);
	else
		i = 0;
	while (i <= length - 2)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	int	tab[] = {5, 6, 7, 4, 4};

	printf("%d", ft_is_sort(tab, 5, f));
	return (0);

}

