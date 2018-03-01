char	**ft_split_whitespaces(char *str);
struct	s_stock_par	*ft_param_to_tab(int ac, char **av);

typedef struct  s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
} 					t_stock_par;
