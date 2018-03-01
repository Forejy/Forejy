/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:48:16 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/28 22:04:20 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;
	t_list	*:wq
		precedent;

	if (!(begin_list[0]))
			return ;
	if (ft_list_size(begin_list[0] == 1))
			free (begin_list[0]);
			begin_list[0] = (void *)0;
	else
	{
		precedent = begin_list[0];
		temp = begin_list[0]->next;
	}
	
		
	while(precedent)
	{
		if (cmp(precedent->data, data_ref) != 0)
		{
			precedent->next = temp->next;
			precedent = temp->next
			free(temp);
			temp = precedent->next;
		}
		else
		{
			precedent = temp;
			temp = temp->next;
		}
	}
}

