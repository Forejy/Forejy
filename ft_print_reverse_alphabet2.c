/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 16:59:31 by jmarques          #+#    #+#             */
/*   Updated: 2018/02/07 17:42:08 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char lettre;

	lettre = 'z';
	while (lettre != 96)
	{
		ft_putchar(lettre);
		lettre--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
