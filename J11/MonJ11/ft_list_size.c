/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 13:44:37 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/27 19:22:48 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_cl.h"

int		ft_list_size(t_list *begin_list)
{
	int i;
	t_list *temp;

	i = 0;
	temp = begin_list;
	while (temp != (void *)0)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
