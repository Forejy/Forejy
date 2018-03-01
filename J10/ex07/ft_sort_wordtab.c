/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:05:31 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/26 17:51:35 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tablen(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != (void *)0)
		i++;
	return (i - 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		i_tab;
	char	*temp;

	i_tab = ft_tablen(tab);
	i = 0;
	while (i <= i_tab - 1)
	{
		j = i + 1;
		while (j <= i_tab)
		{
			if ((ft_strcmp(tab[i], tab[j])) > 0)
			{
				temp = &tab[i][0];
				tab[i] = &tab[j][0];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
