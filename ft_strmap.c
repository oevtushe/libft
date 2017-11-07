/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 08:11:07 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/04 13:17:03 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	i = -1;
	fresh = ft_strnew(sizeof(char) * (ft_strlen(s) + 1));
	if (fresh != NULL)
	{
		while (s[++i] != '\0')
			fresh[i] = f(s[i]);
	}
	return (fresh);
}
