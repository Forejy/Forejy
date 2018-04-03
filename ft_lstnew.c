#include "libft.h"

t_list * ft_lstnew(void const *content, size_t content_size)
{

	t_list *elem;

	elem = (void *)0;

	if (!(elem = (t_list *) malloc(sizeof(*elem))))
		return ((void *) 0);
	if (!content)
		elem->content = (void *)0;
	else
		elem->content = (void *)content;
	elem->content_size = content_size;
	elem->next = ((void *) 0);

	return (elem);
}