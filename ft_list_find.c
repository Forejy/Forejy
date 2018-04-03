#include "libft.h"

t_list_ *ft_list_find(t_list_ *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list && data_ref && cmp)
	{
		while (begin_list)
		{
			if (!(cmp(begin_list->data, data_ref)))
				return (begin_list);
			begin_list = begin_list->next;
		}
	}
	return ((void *)0);
}