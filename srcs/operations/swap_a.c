/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:26:45 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/31 15:37:12 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_pile *pile)
{
	int	tmp_nb;

	if (pile->a == NULL || pile->a->next == NULL)
		return ;
	tmp_nb = pile->a->nb;
	pile->a->nb = pile->a->next->nb;
	pile->a->next->nb = tmp_nb;
	ft_printf("sa\n");
}
