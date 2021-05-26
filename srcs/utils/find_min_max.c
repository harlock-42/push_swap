#include "push_swap.h"

/*
** Find the smaller integer in pile->a.
*/

int	find_min(t_list *pile)
{
	t_list	*tmp;
	int	min;

	tmp = pile;
	min = pile->nb;
	while (pile)
	{
		if (min > pile->nb)
			min = pile->nb;
		pile = pile->next;
	}
	pile = tmp;
	return (min);
}

/*
** Find the greater integer in pile->a.
*/

int	find_max(t_list *pile)
{
	t_list	*tmp;
	int	max;

	tmp = pile;
	max = pile->nb;
	while (pile)
	{
		if (max < pile->nb)
			max = pile->nb;
		pile = pile->next;
	}
	pile = tmp;
	return (max);
}
