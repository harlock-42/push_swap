#include "push_swap.h"

static	void	r_reverse_rotate_a(t_pile *pile)
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
	ft_printf("RRA\n");
}

static	void	r_reverse_rotate_b(t_pile *pile)
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
	ft_printf("RRB\n");
}

void		r_reverse_rotate(t_pile *pile)
{
	r_reverse_rotate_a(pile);
	r_reverse_rotate_b(pile);
}
