/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 21:29:49 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/15 16:12:35 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	while (i < n && src[i] != '\0')
	{
		printf("%c\n", src[i]);
		dest[i] = src[i];
		i++;
	}
	if (len_src < n)
		while (i <= (len_dest))
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}

int main()
{
	char dest[15] = "Sal";
	char src[6] = "i1234";
	char dest2[15] = "Sal";
	int	len_dest = 14;

	strncpy(dest, src, 9);
	int i = 0;
	while (i < len_dest)
	{
		putchar(dest[i]);
		i++;
	}
	putchar('\n');

	ft_strncpy(dest2, src, 9);
	int j =0;
	while (j < len_dest)
	{
		putchar(dest2[j]);
				j++;
	}

}

