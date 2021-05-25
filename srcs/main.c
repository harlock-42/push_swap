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
		if (!(a = lst_add_back(NULL, ft_atoi(arg[i]), a)))
			return (NULL);
		++i;
	}
	return (a);
}

static	void	push_swap(char **arg)
{
	t_pile	*pile;

	if (!(pile = malloc(sizeof(t_pile))))
		return ;
	if (!(pile->a = get_pile_a(arg)))
	{
		free_pile(pile);
		ft_printf("%sError%s\n", RED, NC);
		return ;
	}
	algo(pile);
//	lst_print(pile->a);
	free_pile(pile);
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	else
		push_swap(argv  + 1);
	return (0);
}
