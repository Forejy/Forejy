/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:08:00 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/27 18:29:10 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_cl.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
		t_list *temp;
		data=ft_create_elem (data); // t_list *data

		temp = begin_list[0];

		while (temp->next != (void *)0)
			temp = temp->next;
		temp->next = data;
}
