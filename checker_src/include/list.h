/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:14:50 by tallaire          #+#    #+#             */
/*   Updated: 2021/09/07 11:14:51 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	int				nb;
	char			*str;
	struct s_list	*next;
}				t_list;

int			lst_size(t_list *lst);
t_list		*lst_add_back(char *str, int nb, t_list *lst);
t_list		*lst_free(t_list *lst);
void		lst_print(t_list *lst);
void		lst_print_op(t_list *lst);
#endif