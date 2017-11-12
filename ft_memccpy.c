/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 09:43:34 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/12 16:34:50 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	c_cast;
	unsigned char	*dst_cast;
	unsigned char	*src_cast;

	i = 0;
	c_cast = (unsigned char)c;
	dst_cast = (unsigned char*)dst;
	src_cast = (unsigned char*)src;
	while (i < n)
	{
		dst_cast[i] = src_cast[i];
		if (src_cast[i] == c_cast)
			return (&(dst[i + 1]));
		++i;
	}
	return (NULL);
}
