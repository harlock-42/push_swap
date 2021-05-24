#ifndef DEF_CHAINED_LIST_H
# define DEF_CHAINED_LIST_H

typedef	struct	s_list
{
	int		nb;
	char		*str;
	struct	s_list	*next;
}				t_list;

int		lst_size(t_list *lst);
t_list		*lst_add_back(char *str, int nb, t_list *lst);
t_list		*lst_free(t_list *lst);
void		lst_print(t_list *lst);
void		lst_print_op(t_list *lst);
# endif
