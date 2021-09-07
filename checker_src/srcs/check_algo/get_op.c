/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:17:44 by tallaire          #+#    #+#             */
/*   Updated: 2021/09/07 11:17:46 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	is_a_op(char *str)
{
	if (ft_strcmp("sa", str) != 0
		&& ft_strcmp("sb", str) != 0
		&& ft_strcmp("ss", str) != 0
		&& ft_strcmp("pa", str) != 0
		&& ft_strcmp("pb", str) != 0
		&& ft_strcmp("ra", str) != 0
		&& ft_strcmp("rb", str) != 0
		&& ft_strcmp("rr", str) != 0
		&& ft_strcmp("rra", str) != 0
		&& ft_strcmp("rrb", str) != 0
		&& ft_strcmp("rrr", str) != 0)
		return (NO);
	return (YES);
}

t_list	*get_op(int *check)
{
	char	*line;
	t_list	*op;

	op = NULL;
	while (1)
	{
		get_next_line(0, &line);
		if (is_a_op(line) == NO)
		{
			free(line);
			return (op);
		}
		op = lst_add_back(ft_strdup(line), 0, op);
		if (!op)
		{
			*check = 1;
			return (NULL);
		}
		free(line);
	}
	return (op);
}
