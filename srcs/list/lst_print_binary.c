#include "push_swap.h"

void	lst_print_binary(t_list *lst)
{
	while (lst)
	{
		print_binary(lst->index, 1);
		lst = lst->next;
	}
	ft_printf("%sNULL%s\n", YELLOW, NC);
}
