#include "push_swap.h"

void	push_a(t_pile *pile)
{
	t_list	*tmp;
	if (pile->b == NULL)
		return ;
	tmp = pile->a;
	pile->a = pile->b;
	pile->b = pile->b->next;
	pile->a->next = tmp;
}
