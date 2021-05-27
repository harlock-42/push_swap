/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:28:28 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:29:11 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_push_a(t_pile *pile)
{
	int	size;

	size = lst_size(pile->a);
	while (--size && pile->b->nb > pile->a->nb)
		do_op(RA, pile);
	lst_print(pile->a);
	do_op(PA, pile);
}
