/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_nb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:28:18 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:28:19 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	last_nb(t_list *pile)
{
	t_list	*tmp;
	int	nb;

	tmp = pile;
	while (pile->next)
		pile = pile->next;
	nb = pile->nb;
	pile = tmp;
	return (nb);
}
