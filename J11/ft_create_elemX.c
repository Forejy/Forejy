/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:01:13 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/27 16:29:09 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "header_cl.h"

t_list *ft_create_elem(void *data)
{
	t_list	*element;
	element  = (t_list *)malloc(sizeof(t_list) + sizeof(data));
	if (element == (void *)0)
			return 0;
	element->next = (void *)0;
	element->data = data;
	return (element);
}
/*
t_list *ft_create_elem(void *data)
{
	data  = (t_list *)malloc(sizeof(t_list));
	if (data == (void *)0)
			return 0;
	((t_list*)data)->next = (void *)0;
	((t_list*)data)->data = data;
	return (data);
}*/

int main(void)
{
	t_list	*element;
	void	*data;
	int		*a;
	int		b;
	b = 69;
	data = (void *)0;
	element = ft_create_elem(data);
	element->data = &b;
	a = element->data;
	printf("%d", *a);
}
