/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 18:11:22 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/18 19:11:04 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		nmatch(char *s1, char *s2)
{
	int i;
	
	i = 0;
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '*')
		return (nmatch(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	if ((*s1 != *s2 && *s2 == '*') || (*s1 == '*' && *s2 == '*'))
		return (nmatch(s1 + 1, s2) + nmatch (s1, s2 + 1));
	if (*s1 == *s2 && *s1 == '\0')
		return (1);	

	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_putchar(nmatch(argv[1], argv[2]) + 48);
		ft_putchar('\n');
	}
	return (0);
}

