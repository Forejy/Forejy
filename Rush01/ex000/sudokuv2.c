#include <unistd.h>
#include <stdlib.h>
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

void	afficher_grille(int grille[9][9])
{

	int l = 0;
	int c = 0;

	while (l < 9)
	{
		c = 0;
		while (c < 9)
		{
			if (grille[l][c] == '.')
				ft_putchar('.');

			else
				ft_putnbr(grille[l][c]);
			ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}

int		absent_sur_ligne(int k, int grille[9][9], int l)
{
	int c;

	c = 0;
	while (c < 9)
	{
		if (grille[l][c] == k)
			return (1);
		c++;
	}
	return (0);
}

int		absent_sur_colonne(int k, int grille[9][9], int c)
{
	int l;

	l = 0;
	while (l < 9)
	{
		if (grille[l][c] == k)
			return (1);
		l++;
	}
	return (0);
}

int		absent_sur_bloc(int k, int grille[9][9], int l, int c)
{
	int i;
	int j;

	i = l - (l % 3);
	j = c - (c % 3);

	l = i;
	while (l < i + 3)
	{
		c = j;
		while (c < j + 3)
		{
			if (grille[l][c] == k)
				return (1);
			c++;
		}
	l++;
	}
	return (0);
}

int		est_valide(int grille[9][9], int position)
{
	int l;
	int c;
	int k;

	if (position == 9*9)
		return 1;

	l = position/9;
	c = position%9;

	if (grille[l][c] != '.')
		return(est_valide(grille, position + 1));

	k = 1;
	while (k <= 9) 
	{
		if (absent_sur_ligne(k, grille, l) == 0 && absent_sur_colonne(k, grille, c) == 0 &&
			absent_sur_bloc(k, grille, l, c) == 0)
		{
			grille[l][c] = k;
			
			if (est_valide(grille, position + 1))
					return 1;
		}
		k++;
	}
	grille[l][c] = '.';
	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}


	int i;
	int j;

	int grille[9][9];

	i = 0;
	while (i <  9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i+1][j] == '.')
				grille[i][j] = '.';
			else	
				grille[i][j] = argv[i + 1][j] - '0';
			j++;
		}
		i++;
	}


	afficher_grille(grille);
/*	ft_putchar('\n');
	ft_putnbr(absent_sur_ligne(5, grille, 0));
	ft_putchar('\n');
	ft_putnbr(absent_sur_colonne(2, grille, 0));
	ft_putchar('\n');
	ft_putnbr(absent_sur_bloc(1, grille, 3, 4));
*/	ft_putchar('\n');
	est_valide(grille, 0);
	afficher_grille(grille);

	return (0);
}

/*int main()
{
	int		grille[9][9] =
	{
	 	{8, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 3, 6, 0, 0, 0, 0, 0},
		{0, 7, 0, 0, 9, 0, 2, 0, 0},
		{0, 5, 0, 0, 0, 7, 0, 0, 0},
		{0, 0, 0, 0, 4, 5, 7, 0, 0},
		{0, 0, 0, 1, 0, 0, 0, 3, 0},
		{0, 0, 1, 0, 0, 0, 0, 6, 8},
		{0, 0, 8, 5, 0, 0, 0, 1, 0},
		{0, 9, 0, 0, 0, 0, 4, 0, 0}
	};

	afficher_grille(grille);
	ft_putchar('\n');
	ft_putnbr(absent_sur_ligne(5, grille, 0));
	ft_putchar('\n');
	ft_putnbr(absent_sur_colonne(2, grille, 0));
	ft_putchar('\n');
	ft_putnbr(absent_sur_bloc(1, grille, 3, 4));
	ft_putchar('\n');
	est_valide(grille, 0);
	afficher_grille(grille);
	return (0);
}
*/


