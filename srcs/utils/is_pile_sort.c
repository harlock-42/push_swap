/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pile_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:27:54 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:27:55 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Says if the pile is sort or not.
*/

int	is_pile_sort(t_list *pile)
{
	t_list	*tmp;

	tmp = pile;
	while (pile->next)
	{
		if (pile->nb > pile->next->nb)
		{
			pile = tmp;
			return (NO);
		}
		pile = pile->next;
	}
	pile = tmp;
	return (YES);
}
