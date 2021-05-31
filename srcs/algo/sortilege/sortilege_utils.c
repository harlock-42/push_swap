#include "push_swap.h"

int	is_bit_to_sort(t_list *pile, int pos_bit)
{
	t_list	*tmp;

	tmp = pile;
	while (pile)
	{
		if (((pile->index >> pos_bit) & 1) == 1)
			pile = pile->next;
		else
			return (YES);
	}
	pile = tmp;
	return (NO);
}
