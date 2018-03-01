/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:19:55 by jmarques          #+#    #+#             */
/*   Updated: 2018/03/01 18:30:11 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*temp;

	temp = begin_list;
	while (temp)
	{
		f(temp->data);
		temp = temp->next;
	}
}
