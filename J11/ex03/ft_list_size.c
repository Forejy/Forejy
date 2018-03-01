/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 13:44:37 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/28 18:47:44 by jmarques         ###   ########.fr       */
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
