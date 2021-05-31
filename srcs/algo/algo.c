/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:22:30 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/31 15:39:35 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	do_one_op(t_pile *pile)
{
	if (pile->a->next == NULL)
		return ;
	if (pile->a->nb > pile->a->next->nb)
		do_op(SA, pile);
}

void	algo(t_pile *pile)
{
	int	size;

	size = lst_size(pile->a);
	if (size == 1 || size == 2)
		do_one_op(pile);
	else if (size == 3)
		sort_three(pile);
	else if (size == 4)
		sort_four(pile);
	else if (size == 5)
		sort_five(pile);
	else
		sortilege(pile);
}
