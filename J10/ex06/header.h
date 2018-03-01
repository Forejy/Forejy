/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 12:47:35 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/26 19:51:07 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

typedef struct		s_opp
{
	char	str;
	int		(*f)(int, int);
}					t_opp;

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					ft_atoi(char *str);
int					ft_add(int x, int y);
int					ft_sub(int x, int y);
int					ft_mult(int x, int y);
int					ft_div(int x, int y);
int					ft_mod(int x, int y);
#endif
