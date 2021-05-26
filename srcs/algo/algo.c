#include "push_swap.h"

static	void	do_one_op(t_pile *pile)
{
	if (pile->a->next == NULL)
		return ;
	if (pile->a->nb > pile->a->next->nb)
		do_op(SA, pile);
}

void		algo(t_pile *pile)
{
	int	size;

	size = lst_size(pile->a);
	if (size == 1 || size == 2)
		do_one_op(pile);
	else if (size == 3)
		sort_three(pile);
	else if (size == 4)
		sort_four(pile);
	else if (size == 5)
		sort_five(pile);
//	lst_print(pile->a);
//	sortilege(pile);
}
