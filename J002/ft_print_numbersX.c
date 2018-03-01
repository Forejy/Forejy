/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:35:48 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/07 18:42:02 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char lettre;
	lettre = 48;

	while (lettre != 58)
	{
		ft_putchar(lettre);
		lettre++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
