/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 21:08:02 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/22 21:14:49 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *pointer;
	int *temp;

	pointer = (void*)0;
	if (min >= max)
		return (pointer);
	pointer = (int *)malloc(sizeof(int) * ((max - min)));
	temp = pointer;
	while (min < max)
	{
		*pointer = min;
		pointer++;
		min++;
	}
	return (temp);
}

int main (int argc, char **argv)
{
	int i = 0;
	int *tab;
	if (argc)
		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (i++ < atoi(argv[2]) - atoi(argv[1]))
	{
		printf("%d", *tab);
			tab++;
	}

	return 0;
}

