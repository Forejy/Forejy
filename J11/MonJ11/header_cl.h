/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_cl.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:12:08 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/27 18:33:38 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_CL_H
# define HEADER_CL_H

#include <stdio.h>
#include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list *ft_create_elem(void *data);
int		ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
void		ft_list_push_back(t_list **begin_list, void *data);
void ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
void	ft_print_list(t_list **begin_list);
#endif
