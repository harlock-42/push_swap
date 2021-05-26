#include "push_swap.h"

void	lst_print(t_list *lst)
{
	while (lst)
	{
		if (lst->str)
			ft_printf("%s\n", lst->str);
		else
			ft_printf("%d\n", lst->nb);
		lst = lst->next;
	}
	ft_printf("%sNULL%s\n", YELLOW, NC);
}
