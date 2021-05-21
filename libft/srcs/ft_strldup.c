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
	if (!(dup = malloc(size + 1)))
		return (NULL);
	while (i < size)
	{
		dup[i] = str[i];
		++i;
	}
	dup[i] = '\0';
	return (dup);
}
