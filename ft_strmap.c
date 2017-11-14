/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 08:11:07 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/14 11:06:35 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	fresh = NULL;
	if (s && f)
	{
		i = -1;
		fresh = ft_strnew(sizeof(char) * (ft_strlen(s)));
		if (fresh)
		{
			while (s[++i] != '\0')
				fresh[i] = f(s[i]);
		}
	}
	return (fresh);
}
