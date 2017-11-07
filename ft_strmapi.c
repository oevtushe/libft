/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 08:32:11 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/04 13:17:23 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;

	i = -1;
	fresh = ft_strnew(sizeof(char) * (ft_strlen(s) + 1));
	if (fresh != NULL)
	{
		while (s[++i] != '\0')
			fresh[i] = f((unsigned int)i, s[i]);
	}
	return (fresh);
}
