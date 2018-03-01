/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:43:36 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/28 21:19:38 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*actuel;
	t_list	*suivant;
	t_list	*lastt;

	if (begin_list)
	{
		actuel = begin_list[0];
		last = 0;
		while (actuel != 0)
		{
			suivant = actuel->next;
			actuel->next = last;
			last = actuel;
			actuel = suivant;
		}
		begin_list[0] = last;
	}
}
