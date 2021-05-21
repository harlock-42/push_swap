#include "push_swap.h"

void	lst_print(t_list *lst)
{
	while (lst)
	{
		ft_printf("%d\n", lst->nb);
		lst = lst->next;
	}
	ft_printf("%sNULL%s\n", YELLOW, NC);
}
