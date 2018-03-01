/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:01:13 by jmarques          #+#    #+#             */
/*   Updated: 2018/03/01 11:11:47 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*element;

	if (!(element = (t_list *)malloc(sizeof(t_list) + sizeof(data))))
		return ((void *)0);
	if (element == (void *)0)
		return (0);
	element->next = (void *)0;
	element->data = data;
	return (element);
}
