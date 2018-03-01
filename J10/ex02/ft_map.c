/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 21:00:30 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/25 21:01:37 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tab_;

	i = 0;
	tab_ = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		tab_[i] = f(tab[i]);
		i++;
	}
	return (tab_);
}
