/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 21:05:26 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/24 18:41:15 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	char	*temp;
	int		len_src;

	len_src = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * len_src);
	temp = copy;
	while (*src)
		*copy++ = *src++;
	*copy = '\0';
	return (temp);
}
