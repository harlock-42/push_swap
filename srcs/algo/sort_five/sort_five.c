#include "push_swap.h"

void		sort_five(t_pile *pile)
{
	if (is_sort(pile->a) == YES)
		ft_printf("%sYES%s\n", GREEN, NC);
	else
		ft_printf("%sNO%s\n", RED, NC);
}
