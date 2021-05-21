#include <push_swap.h>

t_list		*lst_add_back(int nb, t_list *lst)
{
	t_list	*new;
	t_list	*prev;
	t_list	*tmp;

	new = NULL;
	tmp = lst;
	if (lst == NULL)
		return (lst_add_first(nb, lst));
	prev = lst->prev;
	while (lst->next)
		lst = lst->next;
	if (!(new = malloc(sizeof(t_list *))))
		return (NULL);
	lst->next = new;
	lst->next->next = NULL;
	lst->next->prev = lst;
	lst->next->nb = nb;
	return (tmp);
}
