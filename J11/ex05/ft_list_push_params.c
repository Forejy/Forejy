/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:43:22 by jmarques          #+#    #+#             */
/*   Updated: 2018/03/01 14:04:55 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	t_list	*temp;
	int		i;

	i = 1;
	if (ac = 0)
		return ((void *)0);
	temp = ft_create_elem(av[0]);
	while (i < ac)
	{
		new = ft_create_elem(av[i++]);
		new->next = temp;
		temp = new;
	}
	return (temp);
}
