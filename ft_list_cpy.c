#include "libft.h"

t_list_ **ft_list_cpy (t_list_ **begin_src)
{
	t_list_ **begin_cpy;
	t_list_ *current_src;
	t_list_ *current_cpy;

	begin_cpy = (void *)0;
	current_src = (void *)0;
	current_cpy = (void *)0;
	if (begin_src && *begin_src)
	{
		if((begin_cpy = (t_list_ **)malloc(sizeof(t_list_ *)))
		   && (current_cpy = (t_list_ *)malloc(sizeof(t_list_)))
		   && (current_src = (t_list_ *)malloc(sizeof(t_list_))))
		{
			*begin_cpy = ft_create_elem(ft_create_elem(current_src->data));
			current_src = *begin_src;
			current_cpy = *begin_cpy;
			current_cpy->data = current_src->data;
			current_src = current_src->next;
			while (current_src)
			{
				if(current_cpy->next = ft_create_elem(current_src->data))
				{
					current_src = current_src->next;
					current_cpy = current_cpy->next;
				}
			}
		}
	}
	return (begin_cpy);

}