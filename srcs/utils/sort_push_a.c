#include "push_swap.h"

void	sort_push_a(t_pile *pile)
{
	int	size;

	size = lst_size(pile->a);
	while (--size && pile->b->nb > pile->a->nb)
		do_op(RA, pile);
	lst_print(pile->a);
	do_op(PA, pile);
}
