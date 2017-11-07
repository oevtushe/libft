/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 12:04:06 by oevtushe          #+#    #+#             */
/*   Updated: 2017/10/29 18:58:37 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*cast;

	i = 0;
	cast = (unsigned char*)b;
	while (i < len)
	{
		cast[i] = (unsigned char)c;
		++i;
	}
	return ((void*)cast);
}
