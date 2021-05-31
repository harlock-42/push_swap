/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:27:20 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/31 15:27:28 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Find the greater integer in pile->a.
*/

int	find_max_index(t_list *pile)
{
	t_list	*tmp;
	int		max;

	tmp = pile;
	max = pile->index;
	while (pile)
	{
		if (max < pile->index)
			max = pile->index;
		pile = pile->next;
	}
	pile = tmp;
	return (max);
}
