/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:19:47 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:19:48 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	r_rotate_a(t_pile *pile)
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
static	void	r_rotate_b(t_pile *pile)
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

void		r_rotate(t_pile *pile)
{
	r_rotate_a(pile);
	r_rotate_b(pile);
}
