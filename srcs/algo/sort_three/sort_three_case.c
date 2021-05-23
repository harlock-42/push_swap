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
