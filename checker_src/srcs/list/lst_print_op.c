/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_print_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:18:51 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:18:52 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
