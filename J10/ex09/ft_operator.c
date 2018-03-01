/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:56:13 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/26 19:45:26 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_sub(int x, int y)
{
	return (x - y);
}

int		ft_mul(int x, int y)
{
	return (x * y);
}

int		ft_div(int x, int y)
{
	return (x / y);
}

int		ft_mod(int x, int y)
{
	return (x % y);
}

int		ft_usage(int x, int y)
{
	x = y;
	ft_putstr("error : only [ + - * / % ] are accepted.");
	return (0);
}
