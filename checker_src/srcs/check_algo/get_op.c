#include "push_swap.h"

static	int	is_a_op(char *str)
{
	if (ft_strcmp("SA", str) != 0 &&
	ft_strcmp("SB", str) != 0 &&
	ft_strcmp("SS", str) != 0 &&
	ft_strcmp("PA", str) != 0 &&
	ft_strcmp("PB", str) != 0 &&
	ft_strcmp("RA", str) != 0 &&
	ft_strcmp("RB", str) != 0 &&
	ft_strcmp("RR", str) != 0 &&
	ft_strcmp("RRA", str) != 0 &&
	ft_strcmp("RRB", str) != 0 &&
	ft_strcmp("RRR", str) != 0)
		return (NO);
	return (YES);
}

t_list		*get_op(int *check)
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
		if (!(op = lst_add_back(ft_strdup(line), 0, op)))
		{
			*check = 1;
			return (NULL);
		}
		free(line);
	}
	return (op);
}
