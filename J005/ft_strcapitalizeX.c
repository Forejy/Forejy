/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 15:40:10 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/13 15:50:26 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*sarkozy(char *carlabruni)
{
	while (*carlabruni)
	{
		if (*carlabruni >= 'A' && *carlabruni <= 'Z')
			*carlabruni = *carlabruni + 32;
		carlabruni++;
	}
	return (carlabruni);
}

char	*hulk(char *brucebanner)
{
	while (*brucebanner)
	{
		if (*brucebanner >= 'a' && *brucebanner <= 'z')
			 *brucebanner = *brucebanner - 32;
		brucebanner++;
	}
	return (brucebanner);
}

char	*ft_strcapitalize(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z'))
			hulk(str);
		str++;
		while ((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'Z') ||
				(*str >= 'a' && *str <= 'z'))
		{
			if ((*str >= 'A' && *str <= 'Z'))
				sarkozy(str);
			str++;
		}
		str++;
	}
	return (str);
}

int main(void)
{
	char chaine[30] = "lA *peTitE SoUrIs4&*";

	ft_strcapitalize(chaine);
	printf("%s", chaine);
}


