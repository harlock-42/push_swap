/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_reverse_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:25:55 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:25:56 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	r_reverse_rotate_a(t_pile *pile)
{
	t_list	*last;
	t_list	*tmp;

	last = pile->a;
	tmp = pile->a;
	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	while (last->next)
		last = last->next;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	last->next = pile->a;
	pile->a = last;
}

static	void	r_reverse_rotate_b(t_pile *pile)
{
	t_list	*last;
	t_list	*tmp;

	last = pile->b;
	tmp = pile->b;
	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	while (last->next)
		last = last->next;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	last->next = pile->b;
	pile->b = last;
}

void		r_reverse_rotate(t_pile *pile)
{
	r_reverse_rotate_a(pile);
	r_reverse_rotate_b(pile);
	ft_printf("rrr\n");
}
