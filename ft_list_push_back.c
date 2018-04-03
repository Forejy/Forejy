#include "libft.h"

void ft_list_push_back(t_list_ **begin_list, void *data)
{
	t_list_  *elem;
	t_list_ *current;

	elem = (void *)0;
	current = *begin_list;
	if (*begin_list)
	{
		if ((elem = ft_create_elem(data)))
		{
			while (current->next)
				current = current->next;
			(current->next) = elem;
		}
	}
	else if (begin_list)
		if ((elem = ft_create_elem(data)))
			*begin_list = elem;
}