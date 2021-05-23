#include "push_swap.h"

void		algo(t_pile *pile)
{
	int	size;

	size = lst_size(pile->a);
	if (size == 3)
		sort_three(pile);
}
