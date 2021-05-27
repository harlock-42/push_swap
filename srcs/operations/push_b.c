/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:25:46 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:25:47 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_pile *pile)
{
	t_list	*tmp;
	if (pile->a == NULL)
		return ;
	tmp = pile->b;
	pile->b = pile->a;
	pile->a = pile->a->next;
	pile->b->next = tmp;
	ft_printf("pb\n");
}
