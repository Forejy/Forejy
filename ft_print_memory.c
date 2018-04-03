#include "libft.h"
#include <stdlib.h>


int carac_is_printable_(char c)
{
	if (c >= 32 || c == 127)
		return (1);
	return (0);
}

void ft_putchar_hexa(char c)
{
	char *hexa = "0123456789ABCDEF";
	if (c > 16)
	{
		ft_putchar_hexa(c / 16);
		ft_putchar(hexa[c % 16]);
	}
	if (c <= 15)
		ft_putchar(hexa[c]);
}

void ft_putstr_hexa(char *str)
{
	int i;

	i = 0;
	while (str[i] && i <= 15)
	{
		ft_putchar_hexa(str[i]);
		if (i % 2 != 0)
			ft_putchar(' ');
		i++;
	}
}

void    ft_putstr_16bits(char *str)
{
	int i ;

	i = 0;
	while (str[i] && i <= 15)
	{
		ft_putchar(str[i++]);
	}
}

#include <stdio.h>
void *ft_print_memory( void *addr, unsigned int size)
{
	printf("%p\n", addr);

	if (size)
	{
		char str[50] = "Salut les aminches c'est cool sh.\0.\n...........";
		char *ptr;
		char *ptr_;
		unsigned int *adds;
		adds = (unsigned int *)&str;
		int i;
		int j;

		ptr = &str[0];
		ptr_ = &str[0];
		ft_putnbr_base_addr(adds, "0123456789abcdef");
		ft_putstr(": ");

		while (size > 0)
		{
			i = 0;
			while (i <= 15 && size)

				{if (*ptr <= 15)
					ft_putchar('0');
				ft_putchar_hexa(*ptr);
				if (i % 2 != 0 && i % 15 != 0)
					ft_putchar(' ');
				ptr++;
				i++;
				;
			}
			ft_putchar(' ');
			j = 0;
			while (j <= 15 && size)
			{
				if (!carac_is_printable_(*ptr_))
					ft_putchar('.');
				else
					ft_putchar(*ptr_);
				*ptr_++;
				j++;
				size--;
			}
			ft_putchar('\n');
		}


	}


}