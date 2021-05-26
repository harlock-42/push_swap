#include "push_swap.h"

int	last_nb(t_list *pile)
{
	t_list	*tmp;
	int	nb;

	tmp = pile;
	while (pile->next)
		pile = pile->next;
	nb = pile->nb;
	pile = tmp;
	return (nb);
}
