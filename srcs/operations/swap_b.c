#include "push_swap.h"

void		swap_b(t_pile *pile)
{
	t_list	*tmp;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	tmp = pile->b;
	pile->b = pile->b->next;
	pile->b->prev = NULL;
	tmp->next = pile->b->next;
	pile->b->next = tmp;
	tmp->prev = pile->b;
}

