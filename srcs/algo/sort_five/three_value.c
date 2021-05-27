/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:23:41 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:23:42 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		three_value(t_pile *pile)
{
	int	a;
	int	b;
	int	c;

	a = pile->a->nb;
	b = pile->a->next->nb;
	c = pile->a->next->next->nb;
	if (a > b && b > c)
		do_op(SA, pile);
	else if (a > b && b < c && a < c)
		do_op(SA, pile);
	else if (a < b && b > c && a < c)
		do_op(SA, pile);
}
