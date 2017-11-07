/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 10:29:05 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/07 13:07:25 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	j = 0;
	len1 = ft_strlen(dst);
	len2 = ft_strlen(src);
	if (len1 > dstsize)
		return (dstsize + len2);
	i = len1;
	--dstsize;
	while (i < dstsize)
	{
		if (j < len2)
		{
			dst[i] = src[j];
			++j;
		}
		else
			dst[i] = '\0';
		++i;
	}
	dst[i] = '\0';
	return (len1 + len2);
}
