/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:56:00 by jmarques          #+#    #+#             */
/*   Updated: 2018/03/01 14:04:03 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*temp;
	t_list	*suivant;

	temp = begin_list[0];
	while (temp)
	{
		suivant = temp->next;
		free(temp);
		temp = suivant;
	}
	begin_list[0] = (void *)0;
}
