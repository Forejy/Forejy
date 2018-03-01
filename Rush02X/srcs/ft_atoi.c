/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 18:55:56 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/24 16:14:34 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
int		ft_atoi(char *str)
{
	int i;
	unsigned int a;
	int b;

	i = 0;
	a = 0;
	b = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
	|| str[i] == '\t' || str[i] == '\f')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		b = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		a *= 10;
		a += str[i] - '0';
		i++;
	}
	return (a * b);
}
