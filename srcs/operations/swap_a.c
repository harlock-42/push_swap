#include "push_swap.h"

void		swap_a(t_pile *pile)
{
	int	tmp_nb;

	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	tmp_nb = pile->a->nb;
	pile->a->nb = pile->a->next->nb;
	pile->a->next->nb = tmp_nb;
	ft_printf("SA\n");
}
