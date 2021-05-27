/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:20:18 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:20:19 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_pile *pile)
{
	t_list	*tmp;
	t_list	*first;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	tmp = pile->b;
	first = pile->b;
	pile->b = pile->b->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	pile->b = first->next;
	first->next = NULL;
}
