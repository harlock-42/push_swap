#include "push_swap.h"

/*
** Use RRA operation to sort pile->a.
*/

static	void	sort_rra(t_pile *pile)
{
	while (is_pile_sort(pile->a) == NO)
		do_op(RRA, pile);
}

/*
** Use RA operation to sort pile->a.
*/

static	void	sort_ra(t_pile *pile)
{
	while (is_pile_sort(pile->a) == NO)
		do_op(RA, pile);
}

/*
** Use rotation to sort pile->a.
*/

void		sort_rotate(t_pile *pile)
{
	int	median;

	
	median = find_median(pile->a);
	if (pile->a->nb > median)
		sort_ra(pile);
	else
		sort_rra(pile);
}
