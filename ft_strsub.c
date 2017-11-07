/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 09:25:37 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/07 13:27:24 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	if (!s)
		return (NULL);
	i = (int)len;
	substr = ft_strnew(sizeof(char) * len);
	if (substr != NULL)
		while (--i >= 0)
			substr[i] = s[(int)start + i];
	return (substr);
}
