/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:22:21 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:22:22 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static	int	num_is_okey(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		++i;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (NO);
		++i;
	}
	if (is_overflow(str) == YES)
		return (NO);
	return (YES);
}

static	t_list	*get_pile_a(char **arg)
{
	t_list	*a;
	int	i;

	a = NULL;
	i = 0;
	while (arg[i])
	{
		if (num_is_okey(arg[i]) == NO)
			return (NULL);
		a = lst_add_back(NULL, ft_atoi(arg[i]), a);
		if (!a)
			return (NULL);
		++i;
	}
	return (a);
}

static	void	push_swap(char **arg)
{
	t_pile	*pile;

	pile = malloc(sizeof(t_pile));
	if (!pile)
		return ;
	pile->a = get_pile_a(arg);
	if (!pile->a)
	{
		free_pile(pile);
		ft_printf("%sError%s\n", RED, NC);
		return ;
	}
	get_index(pile);
	algo(pile);
//	lst_print(pile->a);
	free_pile(pile);
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	else
		push_swap(argv  + 1);
	return (0);
}
