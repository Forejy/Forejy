/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 21:29:49 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/21 18:20:12 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
