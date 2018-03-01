/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:14:50 by jmarques          #+#    #+#             */
/*   Updated: 2018/03/01 11:19:20 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (!begin_list[0])
		begin_list[0] = ft_create_elem(data);
	else
	{
		new = ft_create_elem(data);
		new->next = begin_list[0];
		begin_list[0] = new;
	}
}
