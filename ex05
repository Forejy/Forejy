#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_par.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	if(nb > 9)
	{
		ft_putnbr(nb/10);
		ft_putchar((nb % 10) +'0');
	}	
	else
		ft_putchar(nb +'0');
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;

	i = 0;
	while (par -> str != NULL)
	{

		ft_putstr(par->copy);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);
		par++;
		i++;
	}
}

int main(int argc, char **argv)
{
	t_stock_par *tab;

	if (argc)
	{
		tab = ft_param_to_tab(argc, argv);
		ft_show_tab(tab);
	}
	return (0);
}
