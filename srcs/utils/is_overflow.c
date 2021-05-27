/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_overflow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:27:48 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:27:49 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** return the length of the integer (str).
*/

static	int	len_integer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		++i;
		if (i > 12)
			return (i);
	}
	return (i);
}

/*
** Says if the integer underflow.
*/

static	int	is_num_underflow(char *str)
{
	int	value;

	value = ft_strcmp(str, "-2147483648");
	if (value > 0)
		return (YES);
	return (NO);
}

/*
** Says if the integer overflow.
*/

static	int	is_num_overflow(char *str)
{
	int	value;

	value = ft_strcmp(str, "2147483647");
	if (value > 0)
		return (YES);
	return (NO);
}

/*
** Says if the integer (str) overflow or underflow or is valid.
*/

int		is_overflow(char *str)
{
	int	size;
	int	max;

	max = 10;
	if (str[0] == '-')
		max = 11;
	size = len_integer(str);
	if (size > max)
		return (YES);
	if (size == max)
	{
		if (str[0] == '-')
			return (is_num_underflow(str));
		else
			return (is_num_overflow(str));
	}
	return (NO);
}
