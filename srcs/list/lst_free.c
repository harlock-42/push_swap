#include "push_swap.h"

t_list	*lst_free(t_list *lst)
{
	t_list	*tmp;

	while (lst && lst->prev)
		lst = lst->prev;
	while (lst)
	{
		tmp = lst;
		if (lst->prev)
			free(lst->prev);
		lst = lst->next;
	}
	free(tmp);
	lst = NULL;
	return (lst);
}
