#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		count_words(char *str)
{
	int	count = 0;
	while (*str)
	{
		while(*str == ' ' || *str == '\t')
			str++;
		count++;
		while(*str != ' ' && *str != '\t')
			str++;
	}
	return (count);
}
int main(int ac, char **av)
{
	int	count = count_words(av[1]);

	if (ac == 2)
	{
		while (*av[0])
		{
			while(*av[0] == ' ' || *av[0] == '\t')
				av[0]++;
			count--;
			if (count == 0)
			{
				while (*av[0] && *av[0] != ' ' && *av[0] != '\t')
				{
					ft_putchar(*av[0]);
					av[0]++;
				}


			}	
			while(*av[0] != ' ' && *av[0] != '\t')
				av[0]++;
			
		}
	}

		ft_putchar('\n');
	return (0);
}


