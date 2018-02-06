#include "libft.h"

/*
** If ft_strnew cant't allocate new string
** previous data in str stay untouched.
*/

void	ft_str_realloc(char **str, size_t new_len)
{
	char	*new_str;

	if (str && *str)
	{
		new_str = ft_strnew(new_len);
		if (new_str)
		{
			ft_strncpy(new_str, *str, new_len);
			ft_strdel(str);
			*str = new_str;
		}
	}
}
