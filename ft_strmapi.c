/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 08:32:11 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/14 11:06:22 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
				fresh[i] = f((unsigned int)i, s[i]);
		}
	}
	return (fresh);
}
