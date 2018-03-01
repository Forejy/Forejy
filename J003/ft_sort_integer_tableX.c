/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 15:02:59 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/09 15:26:37 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int k = 0;
	int tableau[4] = {6, -8, 4, 3};

	ft_sort_integer_table(tableau, 4);

	while (k < 4)
	{
		printf("%d\n", tableau[k]);
		k++;
	}
}
