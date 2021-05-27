/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortilege.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:23:03 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:23:13 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	sort_a_bit(t_pile *pile, int pos_bit)
{
	int	size;

	size = lst_size(pile->a);
	while (size)
	{
		if (((pile->a->index >> pos_bit) & 1) == 1)
			do_op(RA, pile);
		else
			do_op(PB, pile);
		--size;
	}
	while (pile->b)
		do_op(PA, pile);
}

static	int	find_max_bit(int max)
{
	int	max_bit;

	max_bit = 0;
	while ((max >> max_bit) != 0)
		++max_bit;
	return (max_bit);
}

void		sortilege(t_pile *pile)
{
	int	max;
	int	max_bit;
	int	pos_bit;

	max = find_max_index(pile->a);
	max_bit = find_max_bit(max);
	pos_bit = 0;
	while (pos_bit < max_bit)
	{
		sort_a_bit(pile, pos_bit);
		++pos_bit;
	}
		
//	lst_print(pile->a);
}
