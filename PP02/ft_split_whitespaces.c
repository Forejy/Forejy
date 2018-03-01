/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 12:18:11 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/21 17:48:28 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	k;

	k = 0;
	while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
	{
		str++;
		k++;
	}
	return (k);
}

int		ft_count_words(char *str)
{
	int		words;

	words = 0;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (*str != '\0')
			words++;
		while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
			str++;
	}
	return (words);
}

char	*fuck_the_norm(char *str)
{
	while ((*str == ' ' || *str == '\t' || *str == '\n') && *str != '\0')
	{
		str++;
	}
	return (str);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		words;
	char	**split_str;

	words = ft_count_words(str);
	split_str = (char **)malloc(sizeof(char *) * (words + 1));
	i = 0;
	while (*str != '\0')
	{
		j = 0;
		str = fuck_the_norm(str);
		split_str[i] = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
		while (*str != '\n' && *str != '\t' && *str != ' ' && *str != '\0')
		{
			split_str[i][j++] = *str++;
		}
		if (*str != '\0' || i < words)
			split_str[i++][j] = '\0';
	}
	split_str[i] = NULL;
	return (split_str);
}
