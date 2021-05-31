/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:26:52 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/31 15:37:17 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_pile *pile)
{
	int	tmp_nb;

	if (pile->b == NULL || pile->b->next == NULL)
		return ;
	tmp_nb = pile->b->nb;
	pile->b->nb = pile->b->next->nb;
	pile->b->next->nb = tmp_nb;
	ft_printf("sb\n");
}
