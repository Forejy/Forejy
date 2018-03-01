/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:43:22 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/28 13:22:31 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element == (void *)0)
		return (0);
	element->next = (void *)0;
	element->data = data;
	return (element);
}

void		ft_list_push_back(t_list **begin_list, void *data)
{
		t_list *temp;
		data=ft_create_elem (data); // t_list *data

		temp = begin_list[0];

		while (temp->next != (void *)0)
			temp = temp->next;
		temp->next = data;
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*temp;
	temp=ft_create_elem(data);

	temp->next = begin_list[0];
	begin_list[0] = temp; //being_list[0] = adresse de temp
}

t_list *ft_list_push_params(int ac, char **av)
{
	t_list	*data;
	t_list 	*element;
	t_list	**begin_list;
	int 	i;
	data=(void *)0;
	begin_list = (t_list **)malloc(sizeof(t_list)*1);


	element = ft_create_elem(data);
	begin_list[0] = element;
	i = 0; 
	while (i <= ac)
	{
		
		element[i].data = av[ac - i];
		i++;
	}
	return (begin_list[0]);
}

int		main(int ac, char **av)
{
	t_list	*element=(void *)0;
	int i;

	i = 1;
	if (ac)
	element=ft_list_push_params(ac,av);

	while(i <= ac)
	{
		printf("%s\n", element[i].data);
		i++;
	}


	

	return (0);
}
