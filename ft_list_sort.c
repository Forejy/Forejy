#include "libft.h"

void ft_list_swap_elem(t_list_ *current, t_list_ *next)
{
	if (current && next)
	{
		t_list_ *temp;

		if (current->next == next)
		{
			current->next = next->next;
			next->next = current;
		}
		else if (temp = (t_list_ *) malloc(sizeof(t_list_)))
		{
			temp = current->next;
			current = next->next;
			next->next = temp;
		}
	}
}

void ft_list_sort(t_list_ **begin_list, int (*cmp)())
{
	if (begin_list && &begin_list && cmp)
	{
		if (ft_list_size(*begin_list) >= 2)
		{
			t_list_ *comparing;
			t_list_ *compared;
			void *temp;

			temp = (void *)0;
			comparing = *begin_list;
			while ((comparing->next))
			{
				compared = comparing->next;
				while (compared)
				{
					if (cmp (comparing->data, compared->data) > 0)
					{
						temp = comparing->data;
						comparing->data = compared->data;
						compared->data = temp;
					}
					compared = compared->next;
				}
				comparing = comparing->next;
			}

		}

	}
}