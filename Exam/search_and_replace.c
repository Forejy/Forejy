#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*(str++));
}

int main(int ac, char **av)
{
	char *temp;
	ft_putstr("Avant : ");
	ft_putstr(av[1]);
	ft_putchar('\n');
	temp = av[1];
	if (ac == 4)
	{
		while(*av[1])
		{
			if(*av[1] == *av[2])
				*av[1] = *av[3];
			av[1]++;
		}
		ft_putstr(temp);
		ft_putchar('\n');
	}
	
	else write(1, "\n", 1);
	return 0;
}
