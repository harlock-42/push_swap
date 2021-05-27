/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:25:38 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:25:40 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_pile *pile)
{
	t_list	*tmp;
	if (pile->b == NULL)
		return ;
	tmp = pile->a;
	pile->a = pile->b;
	pile->b = pile->b->next;
	pile->a->next = tmp;
	ft_printf("pa\n");
}
