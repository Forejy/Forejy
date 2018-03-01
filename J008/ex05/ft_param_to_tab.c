/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:31:27 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/23 15:56:52 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_par.h"

int					ft_tablen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*copy;
	char	*temp;
	int		len_src;

	len_src = ft_tablen(src);
	copy = (char *)malloc(sizeof(char) * (len_src + 1));
	temp = copy;
	while (*src)
		*copy++ = *src++;
	*copy = '\0';
	return (temp);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *ptr_tab;
	t_stock_par *temp;
	int			i;

	ptr_tab = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	temp = ptr_tab;
	i = 0;
	while (i < ac)
	{
		ptr_tab->size_param = ft_tablen(av[i]);
		ptr_tab->str = &av[i][0];
		ptr_tab->copy = ft_strdup(av[i]);
		ptr_tab->tab = ft_split_whitespaces(av[i]);
		i++;
		ptr_tab++;
	}
	ptr_tab->str = (void *)0;
	return (temp);
}
