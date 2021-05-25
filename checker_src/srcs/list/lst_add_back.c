#include "push_swap.h"

t_list	*lst_add_back(char *str, int nb, t_list *list)
{
	t_list	*new;
	t_list	*tmp;

	tmp = list;
	if (list == NULL)
	{
		if(!(list = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		list->str = str;
		list->nb = nb;
		list->next = NULL;
		return (list);
	}
	if(!(new = (t_list *)malloc(sizeof(t_list))))
	{
		if (str != NULL)
			free(str);
		return (NULL);
	}
	new->str = str;
	new->nb = nb;
	new->next = NULL;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (list);
}