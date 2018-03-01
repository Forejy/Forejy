/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:43:22 by jmarques          #+#    #+#             */
/*   Updated: 2018/03/01 16:45:39 by jmarques         ###   ########.fr       */
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	t_list	*temp;
	int i;

	i = 1;
	temp = ft_create_elem(av[0]);
	if (!ac)
		return ((void *)0);
	while (i < ac)
	{
		new = ft_create_elem(av[i++]);
		new->next = temp;
		temp = new;
	}
	return (temp);
}
/*
   t_list    *ft_list_push_params(int ac, char **av)
   {
   t_list	*list;
   t_list	*temp;

   list = (ac > 0) ? ft_create_elem(av[ac-- -1]) : 0;
   while (ac > 0)
   {
   temp = ft_create_elem(av[ac-- - 1]);
   temp -> next = temp;

   }
   return (list);
   }*/

/*void 	ft_list_clear(t_list **begin_list)
{
	t_list	*temp;


	temp = begin_list[0];
	begin_list[0]=begin_list[0]->next;
	
	printf("free temp : %s\n", temp->data);
	free (temp);
	free (temp);
	printf("free temp : %s\n", temp->data);
}*/

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

int		ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*temp;

	temp = begin_list;
	if ((!begin_list))
		count = 0;
	else
		count = 1;
	while ((temp = temp->next))
		count++;
	return (count);
}

t_list *ft_list_last(t_list *begin_list)
{
	t_list *temp;

	temp = begin_list;

	while ((temp->next))
		temp = temp->next;
	return (temp);
}

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*temp;

	temp = begin_list;

	if (!begin_list || nbr > (unsigned int)ft_list_size(begin_list))
	{
		return ((void *)0);;
	}

	else
	{	
		while (nbr - 1)
		{
			temp = temp->next;
			nbr--;
		}
	}
	return (temp);
}

void ft_list_reverse(t_list **begin_list)
{
	t_list	*actuel;
	t_list	*suivant;
	t_list	*last;

	if (begin_list)
	{
		actuel = begin_list[0];
		last = 0;
		while (actuel != 0)
		{
			suivant = actuel -> next;
			actuel->next = last;
			last = actuel;
			actuel = suivant;
		}
		begin_list[0] = last;
	}
}
		

#include <string.h>

int		main(int ac, char **av)
{
	t_list	*element=(void *)0;
	t_list **begin_list=(void *)0;;
	t_list	*ptr=(void *)0;
	int i;

	begin_list=malloc(sizeof(t_list *));
	i = 0;
	if (ac)
		element=ft_list_push_params(ac,av);
	begin_list[0] = element;


	while (i < ac)
	{
		printf("%s\n", element->data);
		element=element->next;
		i++;
	}

	printf("list_size : %d\n\n", ft_list_size(begin_list[0]));

	printf("First_Element : %s\n", begin_list[0]->data);

	ptr=ft_list_last(begin_list[0]);
	printf("list_last : %s\n", ptr->data);

	ptr=ft_list_at(begin_list[0], 2);
	printf("list_at : %s\n", ptr->data);

	/*while(strcmp(begin_list[0]->data,  "./a.out") != 0)
		begin_list[0]=begin_list[0]->next;*/

	/*printf("%s\n", begin_list[0]->data);
	ft_list_clear(begin_list);
	printf("Element last - 1 : %s", begin_list[0]->data);//imprimer dernier membre apres avoir supprimer = segf*/
	
	ft_list_reverse(begin_list);
	element = begin_list[0];
	i = 1;
	printf("\nREVERSE\n");
	while (i <= ac)
	{
		printf("%s\n", element->data);
		element=element->next;
		i++;
	}
	return (0);
}
