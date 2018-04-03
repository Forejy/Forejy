#include "libft.h"

t_list_ *ft_list_push_params(int ac, char **av)
{
	t_list_ **begin_list;

	begin_list = (void *)0;
	if(!(begin_list = (t_list_ **)malloc(sizeof(t_list_ *))))
		return ((void *)0);
	while (ac)
	{
		ft_list_push_back(begin_list, av[ac - 1]);
		ac--;
	}
	return (*begin_list);
}