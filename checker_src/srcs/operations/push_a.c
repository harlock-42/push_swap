/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:19:28 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/31 15:16:03 by tallaire         ###   ########.fr       */
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
}
