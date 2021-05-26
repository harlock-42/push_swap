#include "push_swap.h"

void		swap_b(t_pile *pile)
{
	int	tmp_nb;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	tmp_nb = pile->b->nb;
	pile->b->nb = pile->b->next->nb;
	pile->b->next->nb = tmp_nb;
	ft_printf("sb\n");
}
