/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:26:36 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/31 15:36:58 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Exchange the first and the second link of the stack a (pile->a).
*/

static	void	s_swap_a(t_pile *pile)
{
	int	tmp_nb;

	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	tmp_nb = pile->a->nb;
	pile->a->nb = pile->a->next->nb;
	pile->a->next->nb = tmp_nb;
}

/*
** Exchange the first and the second link of the stack b (pile->b).
*/

static	void	s_swap_b(t_pile *pile)
{
	int	tmp_nb;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	tmp_nb = pile->b->nb;
	pile->b->nb = pile->b->next->nb;
	pile->b->next->nb = tmp_nb;
}

/*
** Exchange the first and the second link of the two respective stack
** (pile->a ; pile->b).
*/

void	s_swap(t_pile *pile)
{
	s_swap_a(pile);
	s_swap_b(pile);
	ft_printf("ss\n");
}
