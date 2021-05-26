#include "push_swap.h"

/*
** sort the integer of pile->b if pile->b->nb > max.
*/

static	void	do_max(t_pile *pile)
{
	do_op(PA, pile);
	do_op(RA, pile);
}

/*
** sort the integer of pile->b if pile->b->nb < min.
*/

static	void	do_min(t_pile *pile)
{
	do_op(PA, pile);
}

/*
** Put integer of pile->b between the min and the med of pile->a
*/

static	void	do_minus_med(t_pile *pile)
{
	do_op(RA, pile);
	do_op(PA, pile);
	do_op(RRA, pile);
}

/*
** Put integer of pile->b between the min and the med of pile->a
*/

static	void	do_plus_med(t_pile *pile)
{
	do_op(RRA, pile);
	do_op(PA, pile);
	do_op(RA, pile);
	do_op(RA, pile);
}

void		sort_four(t_pile *pile)
{
	int	min;
	int	max;
	int	med;

	do_op(PB, pile);
	if (is_pile_sort(pile->a) == NO)
		sort_three(pile);
	min = find_min(pile->a);
	max = find_max(pile->a);
	med = find_med(pile->a);
	if (pile->b->nb > max)
		do_max(pile);
	else if (pile->b->nb < min)
		do_min(pile);
	else if (pile->b->nb < med)
		do_minus_med(pile);
	else
		do_plus_med(pile);
}
