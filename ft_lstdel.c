#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *next;

	current = *alst;
	next = (*alst)->next;
	while (current)
	{
		del(current->content, current->content_size);
		free (current);
		current = next;
		if (next->next)
			next = next->next;
	}
	*alst = ((void *)0);
}