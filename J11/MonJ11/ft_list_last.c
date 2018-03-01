/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:42:25 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/27 19:39:58 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_cl.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list	*temp;

	temp = begin_list;
	while (temp->next != (void *)0)
	{
		temp = temp->next;
	}
	return (temp);
}
