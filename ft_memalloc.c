/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 19:58:40 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/14 11:17:13 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	if (size == 0)
		return (NULL);
	i = -1;
	mem = (char*)malloc(size);
	if (mem == NULL)
		return (NULL);
	while (++i < size)
		mem[i] = 0;
	return ((void*)mem);
}
