/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:08:00 by jmarques          #+#    #+#             */
/*   Updated: 2018/03/01 11:18:46 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;

	if (!begin_list[0])
		begin_list[0] = ft_create_elem(data);
	else
	{
		new = begin_list[0];
		while (new->next)
			new = new->next;
		new->next = ft_create_elem(data);
	}
}
