#ifndef DEF_PUSH_SWAP_H
#define DEF_PUSH_SWAP_H

#include "./libft.h"
#include "./color.h"
#include "./list.h"

typedef	struct	s_pile
{
	t_list	*a;
	t_list	*b;
}		t_pile;

/*
** ALGO
*/

void	algo(t_pile *pile);

/*
** OPERATIONS
*/

void	swap_a(t_pile *pile);
void	swap_b(t_pile *pile);
void	s_swap(t_pile *pile);

/*
** UTILS
*/

int	is_overflow(char *str);
t_pile	*free_pile(t_pile *pile);

#endif
