/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:17:31 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/31 15:05:02 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	wich_op(char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		return (SA);
	else if (ft_strcmp(str, "sb") == 0)
		return (SB);
	else if (ft_strcmp(str, "ss") == 0)
		return (SS);
	else if (ft_strcmp(str, "pa") == 0)
		return (PA);
	else if (ft_strcmp(str, "pb") == 0)
		return (PB);
	else if (ft_strcmp(str, "ra") == 0)
		return (RA);
	else if (ft_strcmp(str, "rb") == 0)
		return (RB);
	else if (ft_strcmp(str, "rr") == 0)
		return (RR);
	else if (ft_strcmp(str, "rra") == 0)
		return (RRA);
	else if (ft_strcmp(str, "rrb") == 0)
		return (RRB);
	else
		return (RRR);
}

static	void	do_algo(t_pile *pile)
{
	t_list	*tmp;

	tmp = pile->op;
	while (pile->op)
	{
		do_op(wich_op(pile->op->str), pile);
		pile->op = pile->op->next;
	}
	pile->op = tmp;
}

static	int	is_pile_sort(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (a->next)
	{
		if (a->nb > a->next->nb)
		{
			a = tmp;
			return (NO);
		}
		a = a->next;
	}
	return (YES);
}

int	check_algo(t_pile *pile)
{
	t_list	*op;

	op = NULL;
	do_algo(pile);
	if (pile->a == NULL)
		return (NO);
	if (pile->b != NULL)
		return (NO);
	if (pile->a->next == NULL)
		return (YES);
	if (is_pile_sort(pile->a) == NO)
		return (NO);
	return (YES);
}
