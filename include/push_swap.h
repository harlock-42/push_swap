/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:21:51 by tallaire          #+#    #+#             */
/*   Updated: 2021/05/27 18:21:55 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PUSH_SWAP_H
#define DEF_PUSH_SWAP_H

#include "./libft.h"
#include "./color.h"
#include "./list.h"
#include "./operation.h"

typedef	struct	s_pile
{
	t_list	*a;
	t_list	*b;
}		t_pile;

/*
** ALGO
*/

void	algo(t_pile *pile);
void	sort_five(t_pile *pile);
void	sort_four(t_pile *pile);
void	sort_three(t_pile *pile);
void	sort_three_case_1(t_pile *pile);
void	sort_three_case_2(t_pile *pile);
void	sort_three_case_3(t_pile *pile);
void	sort_three_case_4(t_pile *pile);
void	sort_three_case_5(t_pile *pile);
void	sortilege(t_pile *pile);
void	three_value(t_pile *pile);
int	is_bit_to_sort(t_list *pile, int pos_bit);
int	is_pile_sort(t_list *pile);

/*
** OPERATIONS
*/

void	push_a(t_pile *pile);
void	push_b(t_pile *pile);
void	r_rotate(t_pile *pile);
void	r_reverse_rotate(t_pile *pile);
void	reverse_rotate_a(t_pile *pile);
void	reverse_rotate_b(t_pile *pile);
void	rotate_a(t_pile *pile);
void	rotate_b(t_pile *pile);
void	s_swap(t_pile *pile);
void	swap_a(t_pile *pile);
void	swap_b(t_pile *pile);

/*
** GET_INDEX
*/

void	get_index(t_pile *pile);

/*
** UTILS
*/

int	do_op(int op, t_pile *pile);
int	find_med(t_list *pile);
int	find_min(t_list *pile);
int	find_max(t_list *pile);
int	find_max_index(t_list *pile);
int	is_overflow(char *str);
int	is_sort(t_list *list);
int	is_sort_rev(t_list *list);
int	last_nb(t_list *pile);
t_pile	*free_pile(t_pile *pile);
void	sort_rotate(t_pile *pile);
void	sort_push_a(t_pile *pile);

#endif
