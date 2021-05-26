#include "push_swap.h"

void	push_b(t_pile *pile)
{
	t_list	*tmp;
	if (pile->a == NULL)
		return ;
	tmp = pile->b;
	pile->b = pile->a;
	pile->a = pile->a->next;
	pile->b->next = tmp;
	ft_printf("pb\n");
}
