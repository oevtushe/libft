/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:12:31 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/07 12:58:01 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (src - dst > 0)
	{
		i = 0;
		while ((unsigned int)i < len)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			++i;
		}
	}
	else
	{
		i = (int)len;
		while (--i >= 0)
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	}
	return (dst);
}
