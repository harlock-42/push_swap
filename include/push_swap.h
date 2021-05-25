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
void	sort_three(t_pile *pile);
void	sort_three_case_1(t_pile *pile);
void	sort_three_case_2(t_pile *pile);
void	sort_three_case_3(t_pile *pile);
void	sort_three_case_4(t_pile *pile);
void	sort_three_case_5(t_pile *pile);
void	sortilege(t_pile *pile);
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
** UTILS
*/

int	do_op(int op, t_pile *pile);
int	find_median(t_list *pile);
int	find_min(t_pile *pile);
int	find_max(t_pile *pile);
int	is_overflow(char *str);
t_pile	*free_pile(t_pile *pile);
void	sort_rotate(t_pile *pile);
void	sort_push_a(t_pile *pile);

#endif
