/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 13:55:08 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/27 18:35:28 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_cl.h"

void	ft_print_list(t_list **begin_list)
{
	t_list *temp;
	temp = begin_list[0];
/*	while(temp != (void *)0)
	{*/
		printf("%p", temp->data);
		temp = temp -> next;
	
}
