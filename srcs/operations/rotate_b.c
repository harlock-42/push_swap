#include "push_swap.h"

void	rotate_b(t_pile *pile)
{
	t_list	*tmp;
	t_list	*first;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	tmp = pile->b;
	first = pile->b;
	pile->b = pile->b->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	pile->b = first->next;
	first->next = NULL;
	ft_printf("RB\n");
}
