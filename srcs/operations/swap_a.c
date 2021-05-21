#include "push_swap.h"

void		swap_a(t_pile *pile)
{
	t_list	*tmp;

	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	tmp = pile->a;
	pile->a = pile->a->next;
	pile->a->prev = NULL;
	tmp->next = pile->a->next;
	pile->a->next = tmp;
	tmp->prev = pile->a;
}
