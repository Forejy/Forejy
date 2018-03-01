/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 12:39:04 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/18 14:25:07 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *chaine)
{
	int	i;

	i = 0;
	while (chaine[i])
		i++;
	return (i);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (!*s1 || *s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len_to_find;

	len_to_find = ft_strlen(to_find);
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (ft_strncmp(str, to_find, len_to_find) == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
