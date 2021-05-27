/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:27:42 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:27:43 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	*free_pile(t_pile *pile)
{
	if (pile == NULL)
		return (NULL);
	if (pile->a)
		pile->a = lst_free(pile->a);
	if (pile->b)
		pile->b = lst_free(pile->b);
	free(pile);
	return (NULL);
}
