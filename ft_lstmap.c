#include "libft.h"

void    t_list_del(void *content, size_t content_size)
{
	free(content);
	content_size = 0;
}

t_list * ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *current;
	t_list **new_list;
	t_list *current_new;
	void (*del)(void *, size_t);

	if (!(new_list = (t_list **)malloc(sizeof(t_list))))
		return ((void *)0);
	current = lst;
	current_new = (void *)0;
	 del = t_list_del;

	if (current)
	{
		while(current)
		{
			if(!(current_new = ft_lstnew(current->content, current->content_size)))
			{
				ft_lstdel(new_list, del);
				return ((void *)0);

			}
			ft_lstadd(new_list, f(current_new));
			current = current->next;
		}
	}
	return (*new_list);
}
