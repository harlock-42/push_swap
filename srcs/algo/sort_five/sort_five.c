#include "push_swap.h"

/*
** rotate pile->a until condition are okey to push pile->b->nb in pile->a.
*/

static	void	rotate(t_pile *pile, int nb)
{
	int	min;
	int	max;

	min = find_min(pile->a);
	max = find_max(pile->a);
	if (nb > max || nb < min)
	{
		while (pile->a->nb != min)
			do_op(RA, pile);
	}
	else
	{
		while (1)
		{
			if (nb > last_nb(pile->a) && nb < pile->a->nb)
				break ;
			do_op(RA, pile);
		}
	}
}

/*
** sort list of five.
*/

void		sort_five(t_pile *pile)
{
	if (is_sort(pile->a) == YES)
	{
		sort_rotate(pile);
		return ;
	}
	do_op(PB, pile);
	do_op(PB, pile);
	three_value(pile);
	rotate(pile, pile->b->nb);
	do_op(PA, pile);
	rotate(pile, pile->b->nb);
	do_op(PA, pile);
	sort_rotate(pile);
}
