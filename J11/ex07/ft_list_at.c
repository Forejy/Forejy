/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 17:40:48 by jmarques          #+#    #+#             */
/*   Updated: 2018/03/01 16:45:51 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*temp;

	temp = (void *)0;
	if (!begin_list)
		count = 0;
	else
		count = 1;
	while ((temp = temp->next))
		count++;
	return (count);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*temp;

	temp = begin_list;
	if (!begin_list || nbr > (unsigned int)ft_list_size(begin_list))
	{
		return ((void *)0);
	}
	else
	{
		while (nbr)
		{
			temp = temp->next;
			nbr--;
		}
	}
	return (temp);
}
