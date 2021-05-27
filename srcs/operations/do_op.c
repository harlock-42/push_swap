/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:25:31 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:25:33 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_op(int op, t_pile *pile)
{
	void	(*operation[11])(t_pile *pile);

	(operation[0]) = &swap_a;
	(operation[1]) = &swap_b;
	(operation[2]) = &s_swap;
	(operation[3]) = &push_a;
	(operation[4]) = &push_b;
	(operation[5]) = &rotate_a;
	(operation[6]) = &rotate_b;
	(operation[7]) = &r_rotate;
	(operation[8]) = &reverse_rotate_a;
	(operation[9]) = &reverse_rotate_b;
	(operation[10]) = &r_reverse_rotate;

	(*operation[op])(pile);
	return (1);
}
