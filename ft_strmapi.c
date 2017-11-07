/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 08:32:11 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/07 13:22:29 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;

	if (!s || !f)
		return (NULL);
	i = -1;
	fresh = ft_strnew(sizeof(char) * (ft_strlen(s)));
	if (fresh != NULL)
	{
		while (s[++i] != '\0')
			fresh[i] = f((unsigned int)i, s[i]);
	}
	return (fresh);
}
