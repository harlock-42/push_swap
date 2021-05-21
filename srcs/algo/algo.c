#include "push_swap.h"

void		algo(t_pile *pile)
{
	if (!(pile->b = lst_add_back(2, pile->b)))
		return ;
	if (!(pile->b = lst_add_back(3, pile->b)))
		return ;
	if (!(pile->b = lst_add_back(4, pile->b)))
		return ;
	ft_printf("%p\n", pile->a);
	s_swap(pile);

	ft_printf("%p\n", pile->a);
	lst_print(pile->a);
	lst_print(pile->b);
	ft_printf("%p\n", pile->a);
	free_pile(pile);

}
