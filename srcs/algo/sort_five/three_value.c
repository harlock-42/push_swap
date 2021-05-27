#include "push_swap.h"

void		three_value(t_pile *pile)
{
	int	a;
	int	b;
	int	c;

	a = pile->a->nb;
	b = pile->a->next->nb;
	c = pile->a->next->next->nb;
	if (a > b && b > c)
		do_op(SA, pile);
	else if (a > b && b < c && a < c)
		do_op(SA, pile);
	else if (a < b && b > c && a < c)
		do_op(SA, pile);
}
