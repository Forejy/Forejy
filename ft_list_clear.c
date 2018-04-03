#include "libft.h"

void ft_list_clear(t_list_ **begin_list)
{
	t_list_ *current;

	current = (void *)0;
	if (begin_list && *begin_list && (current = (t_list_ *)malloc(sizeof(t_list_))))
	{
		while (*begin_list)
		{
			current = *begin_list;
			if((*begin_list)->next)
				*begin_list = (*begin_list)->next;
			else
				*begin_list = (void *)0;
			free(current);
			current = (void *)0;
		}
		begin_list = (void *)0;
	}
}
