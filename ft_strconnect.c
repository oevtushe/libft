/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconnect.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:35:32 by oevtushe          #+#    #+#             */
/*   Updated: 2018/07/23 18:41:01 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Connetct @param str2 to @param str1.
**
** @param	str1	string connect to.
** @param	str2	string be connected to.
*/

void		ft_strconnect(char **str1, const char *str2, int side)
{
	int		al;
	char	*res;

	al = 0;
	res = NULL;
	if (str1 && str2)
	{
		if (!*str1)
		{
			*str1 = ft_strnew(0);
			al = 1;
		}
		if (*str1)
		{
			if (side > 0)
				res = ft_strjoin(*str1, str2);
			else if (side < 0)
				res = ft_strjoin(str2, *str1);
			if (res)
			{
				ft_strdel(str1);
				*str1 = res;
			}
			else if (al)
				ft_strdel(str1);
		}
	}
}
