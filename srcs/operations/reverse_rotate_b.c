#include "push_swap.h"

void	reverse_rotate_b(t_pile *pile)
{
	t_list	*last;
	t_list	*tmp;

	last = pile->b;
	tmp = pile->b;
	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	while (last->next)
		last = last->next;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	last->next = pile->b;
	pile->b = last;
	ft_printf("rrb\n");
}
