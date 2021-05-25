#include "push_swap.h"

static	int	is_median(int nb, t_list *pile)
{
	t_list	*tmp;
	int	minus;
	int	plus;
	int	result;

	tmp = pile;
	minus = 0;
	plus = 0;
	while (pile)
	{
		if (nb < pile->nb)
			++plus;
		else if (nb > pile->nb)
			++minus;
		pile = pile->next;
	}
	result = plus - minus;
	pile = tmp;
	if (result >= (-1) && result <= 1)
		return (YES);
	return (NO);
}

int	find_median(t_list *pile)
{
	t_list	*tmp;
	int	median;

	tmp = pile;
	median = 0;
	while (pile)
	{
		if (is_median(pile->nb, tmp) == YES)
			median = pile->nb;
		pile = pile->next;
	}
	pile = tmp;
	return (median);
}
