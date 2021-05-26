#include "push_swap.h"

/*
** find the begin of the pile int the list.
*/

static	t_list	*find_first(t_list *pile, int min)
{
	t_list	*tmp;
	t_list	*first;

	tmp = pile;
	while (pile && pile->nb != min)
		pile = pile->next;
	first = pile;
	pile = tmp;
	return (first);
}

/*
** va jusqu'au bout de la liste.
*/

static	int	until_null(t_list *pile)
{
	int	prev;

	while (pile)
	{
		prev = pile->nb;
		pile = pile->next;
		if (pile)
			if (prev > pile->nb)
				return (NO);
	}
	return (YES);
}

/*
** va jusqu au bout de la pile (et non de la liste)
*/

static	int	until_max(t_list *pile, int min, int prev)
{
	while (pile && pile->nb != min)
	{
		if (pile->nb < prev)
			return (NO);
		prev = pile->nb;
		pile = pile->next;
	}
	return (YES);
}

/*
** Says if the pile is sort.
** The pile can begin by another integer than min.
*/

int		is_sort(t_list *list)
{
	t_list	*tmp;
	t_list	*pile;
	int	min;
	int	max;
	int	prev;

	prev = 0;
	tmp = list;
	pile = NULL;
	min = find_min(list);
	max = find_max(list);
	pile = find_first(list, min);
	if (until_null(pile) == NO)
		return (NO);
	prev = last_nb(pile);
	pile = tmp;
	if (pile->nb == min)
		return (YES);
	if (until_max(pile, min, prev) == NO)
		return (NO);
	return (YES);
}
