/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tallaire <tallaire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:20:59 by tallaire          #+#    #+#             */
/*   Updated: 2021/09/07 11:21:00 by tallaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** Duplicate size byte from (str) in (dup).
** Finish the new string (dup) with a '\0'.
*/

char	*ft_strldup(char *str, size_t size)
{
	char	*dup;
	size_t	i;

	dup = NULL;
	i = 0;
	dup = malloc(size + 1);
	if (!dup)
		return (NULL);
	while (i < size)
	{
		dup[i] = str[i];
		++i;
	}
	dup[i] = '\0';
	return (dup);
}
