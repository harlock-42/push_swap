#include "push_swap.h"

/*
** Find the greater integer in pile->a.
*/

int	find_max_index(t_list *pile)
{
	t_list	*tmp;
	int	max;

	tmp = pile;
	max = pile->index;
	while (pile)
	{
		if (max < pile->index)
			max = pile->index;
		pile = pile->next;
	}
	pile = tmp;
	return (max);
}
