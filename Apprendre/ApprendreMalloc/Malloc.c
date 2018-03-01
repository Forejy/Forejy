#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	else if (nb > -2147483648)
	{
		ft_putchar(nb + 48);
	}
}

int		main()
{
//	int *Age = NULL;
//	Age = malloc(sizeof(int));
//	*Age = 15;
//
//	ft_putnbr(Age[0]);
//
//	free(Age);
//
//ATTRIBUER MEMOIRE A UN TABLEAU
	char *prenomsAmis = NULL;

	prenomsAmis = malloc(120);

	*prenomsAmis = "Mickael";
	
	ft_putnbr(prenomsAmis[0]);
	ft_putchar('\n');
	ft_putnbr(prenomsAmis[1]);

	free(prenomsAmis);
	
	return (0);

}


