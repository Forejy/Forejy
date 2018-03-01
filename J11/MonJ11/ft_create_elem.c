/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 21:01:13 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/27 20:45:50 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	t_list	**begin_list;
	void	*data;
	void	*data2;
	int		*a;
	int		*b;
	int		count;

	begin_list = (t_list **)malloc(sizeof(t_list)*1);
	if (begin_list == (void *)0)
		return (0);
	data = (void *)0;
	element = ft_create_elem(data);
	begin_list[0] = element;
	count = ft_list_size(element);
	element->data = &count;
	a = element->data;
	printf("%d\n", *a);

	data2 = (void*)0;
	ft_list_push_back(begin_list, data);
	count=ft_list_size(begin_list[0]);
	printf("%d\n", *a);

	ft_list_push_front(begin_list, data);

	count=ft_list_size(begin_list[0]);
	printf("%d\n", *a);
	

	element=ft_list_last(begin_list[0]);
	*a = 5;
	element->data = a;
	b = element->data;
	printf("%d", *b);
	return 0;
}
