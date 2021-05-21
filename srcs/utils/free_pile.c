#include "push_swap.h"

t_pile	*free_pile(t_pile *pile)
{
	if (pile == NULL)
		return (NULL);
	ft_printf("%p\n", pile->a);
	//if (pile->a)
	//	pile->a = lst_free(pile->a);
	//if (pile->b)
	//	pile->b = lst_free(pile->b);
	free(pile);
	return (NULL);
}
