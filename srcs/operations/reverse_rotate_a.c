#include "push_swap.h"

void	reverse_rotate_a(t_pile *pile)
{
	t_list	*last;
	t_list	*tmp;

	last = pile->a;
	tmp = pile->a;
	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	while (last->next)
		last = last->next;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	last->next = pile->a;
	pile->a = last;
	ft_printf("rra\n");
}
