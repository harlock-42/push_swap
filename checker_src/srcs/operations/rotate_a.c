/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:20:11 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:20:12 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_pile *pile)
{
	t_list	*tmp;
	t_list	*first;

	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	tmp = pile->a;
	first = pile->a;
	pile->a = pile->a->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	pile->a = first->next;
	first->next = NULL;
}
