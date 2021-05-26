#include "push_swap.h"

static	void	push_pile_b(t_pile *pile)
{
	int	min;
	int	max;
	int	med;
	int	count;

	med = find_med(pile->a);
	min = find_min(pile->a);
	max = find_max(pile->a);
	count = 0;
	t_list	*tmp;

	while (pile->a)
	{
		if (pile->a->nb != min )
//		pile->a->nb != med &&
//		pile->a->nb != max)
		{
			do_op(PB, pile);
		}
		else
		{
			if (count == 0)
				tmp = pile->a;
			++count;
			pile->a = pile->a->next;
		}
	}
	pile->a = tmp;
}	

void		sortilege(t_pile *pile)
{
	int	min;
	int	max;
	int	med;

	med = find_med(pile->a);
	min = find_min(pile->a);
	max = find_max(pile->a);
	push_pile_b(pile);
	lst_print(pile->a);
	lst_print(pile->b);
}
