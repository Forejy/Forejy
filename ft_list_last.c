#include "libft.h"

t_list_ *ft_list_last(t_list_ *begin_list)
{
	if (begin_list)
	{
		while(begin_list->next)
			begin_list=begin_list->next;
		return (begin_list);
	}
	return ((void *)0);
}