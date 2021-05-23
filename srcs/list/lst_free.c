#include "push_swap.h"

t_list	*lst_free(t_list *lst)
{
	t_list	*tmp;

	tmp = NULL;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp);
	}
	lst = NULL;
	return (lst);
}
