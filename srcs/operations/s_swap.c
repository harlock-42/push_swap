#include "push_swap.h"

/*
** Exchange the first and the second link of the stack a (pile->a).
*/

static	void		s_swap_a(t_pile *pile)
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

/*
** Exchange the first and the second link of the stack b (pile->b).
*/

void		s_swap_b(t_pile *pile)
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

/*
** Exchange the first and the second link of the two respective stack
** (pile->a ; pile->b).
*/

void	s_swap(t_pile *pile)
{
	s_swap_a(pile);
	s_swap_b(pile);
	ft_printf("SS\n");
}
