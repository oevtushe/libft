/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 12:56:18 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/12 13:03:39 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_swap(void *p1, void *p2, size_t size)
{
	void *c;

	c = malloc(size);
	ft_memcpy(c, p1, size);
	ft_memcpy(p1, p2, size);
	ft_memcpy(p2, c, size);
	free(c);
}
