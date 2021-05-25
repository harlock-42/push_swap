#include "push_swap.h"

/*
** Find the smaller integer in pile->a.
*/

int	find_min(t_pile *pile)
{
	t_list	*tmp;
	int	min;

	tmp = pile->a;
	min = pile->a->nb;
	while (pile->a)
	{
		if (min > pile->a->nb)
			min = pile->a->nb;
		pile->a = pile->a->next;
	}
	pile->a = tmp;
	return (min);
}

/*
** Find the greater integer in pile->a.
*/

int	find_max(t_pile *pile)
{
	t_list	*tmp;
	int	max;

	tmp = pile->a;
	max = pile->a->nb;
	while (pile->a)
	{
		if (max < pile->a->nb)
			max = pile->a->nb;
		pile->a = pile->a->next;
	}
	pile->a = tmp;
	return (max);
}
