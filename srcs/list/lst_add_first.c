#include "./../../include/push_swap.h"

t_list	*lst_add_first(int nb, t_list *lst)
{
	t_list	*new;

	new = NULL;
	if (lst)
		return (lst);
	if (!(new = malloc(sizeof(t_list *))))
		return (NULL);
	new->next = NULL;
	new->nb = nb;
	return (new);
}
