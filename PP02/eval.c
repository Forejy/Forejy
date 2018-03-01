#include <unistd.h>
int		ft_atoi(char *str);
char	**ft_split_whitespaces(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int	nb);



int		eval_expr(char *str)
{
	int i;
	int j;
	char	**expr;

	i = 0;
	expr = ft_split_whitespaces(str);

	while (expr[i] != NULL)
	{
		j = 0;
		while (expr[i][j] != '+' && expr[i][j] != '-' && expr[i][j] != '/' && expr[i][j] != '*' && expr[i][j] != '%' && expr[i][j] != '\0')
		{
			j++;
		}
			if (expr[i][j] == '+')
				return(ft_atoi(expr[i - 1]) + ft_atoi(expr[i + 1]));
			if (expr[i][j] == '-')
				return(ft_atoi(expr[i - 1]) - ft_atoi(expr[i + 1]));
			if (expr[i][j] == '/')
				return(ft_atoi(expr[i - 1]) / ft_atoi(expr[i + 1]));
			if (expr[i][j] == '*')
				return (ft_atoi(expr[i - 1]) * ft_atoi(expr[i + 1]));
			if (expr[i][j] == '%')
				return(ft_atoi(expr[i - 1]) % ft_atoi(expr[i + 1]));
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}


