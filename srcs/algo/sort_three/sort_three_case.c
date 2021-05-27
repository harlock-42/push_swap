/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_case.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:24:13 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:24:14 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_case_1(t_pile *pile)
{
	do_op(SA, pile);
	do_op(RRA, pile);
}

void	sort_three_case_2(t_pile *pile)
{
	do_op(SA, pile);
}

void	sort_three_case_3(t_pile *pile)
{
	do_op(RA, pile);
}

void	sort_three_case_4(t_pile *pile)
{
	do_op(SA, pile);
	do_op(RA, pile);
}

void	sort_three_case_5(t_pile *pile)
{
	do_op(RRA, pile);
}
