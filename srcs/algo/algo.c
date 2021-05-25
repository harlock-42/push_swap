#include "push_swap.h"

void		algo(t_pile *pile)
{
	int	size;

	size = lst_size(pile->a);
	while (1)
	{
		size = lst_size(pile->a);
		sortilege(pile);
	//	if (is_pile_sort(pile->a) == YES)
			break ;
	}
}
