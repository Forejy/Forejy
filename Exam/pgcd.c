#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int	x;
		int	y;
		int	pgcd;
	
		x = atoi(av[1]);
		y = atoi(av[2]);
		if (x >= y)
			pgcd = y;
		else 
			pgcd = x;
		while(pgcd > 0)
		{
			if ((x % pgcd == 0) && (y % pgcd == 0))
			{
				printf("%d\n", pgcd);
				return (0);
			}
			pgcd--;
		}
	}
	return (0);
}
