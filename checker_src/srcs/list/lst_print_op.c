#include "push_swap.h"

void	lst_print_op(t_list *lst)
{
	while (lst)
	{
		ft_printf("%s\n", lst->str);
		lst = lst->next;
	}
	ft_printf("%sNULL%s\n", YELLOW, NC);
}
