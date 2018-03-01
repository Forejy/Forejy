/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:14:50 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/27 18:29:36 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_cl.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*temp;
	temp=ft_create_elem(data);

	temp->next = begin_list[0];
	begin_list[0] = temp; //being_list[0] = adresse de temp
}
