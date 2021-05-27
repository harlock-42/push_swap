/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:24:03 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:24:05 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Sort a list of three integer in fuction of their repartition.
**
** case 1 :
**
** a = 3	SA
** b = 2	RRA
** c = 1
**
** case 2 :
**
** a = 2	SA
** b = 1
** c = 3
**
** case 3 :
**
** a = 3	RA
** b = 1
** c = 2
**
** case 4 :
**
** a = 1	SA
** b = 3	RA
** c = 2
**
** case 5 :
**
** a = 2	RRA
** b = 3
** c = 1
*/

void	sort_three(t_pile *pile)
{
	int	a;
	int	b;
	int	c;

	a = pile->a->nb;
	b = pile->a->next->nb;
	c = pile->a->next->next->nb;
	if (a > b && b > c)
		sort_three_case_1(pile);
	else if (a > b && b < c && a < c)
		sort_three_case_2(pile);
	else if (a > b && b < c && a > c)
		sort_three_case_3(pile);
	else if (a < b && b > c && a < c)
		sort_three_case_4(pile);
	else if (a < b && b > c && a > c)
		sort_three_case_5(pile);
}
