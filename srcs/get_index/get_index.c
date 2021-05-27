#include "push_swap.h"

static	int	wich_index(int nb, t_list *pile)
{
	t_list	*tmp;
	int	pos;

	tmp = pile;
	pos = 0;
	while (pile)
	{
		if (pile->nb < nb)
			++pos;
		pile = pile->next;
	}
	return (pos);
}

/*
** Calculate the position of every link in the pile->a.
*/

void	get_index(t_pile *pile)
{
	t_list	*tmp;

	tmp = pile->a;
	while (pile->a)
	{
		pile->a->index = wich_index(pile->a->nb, tmp);
		pile->a = pile->a->next;
	}
	pile->a = tmp;
}
