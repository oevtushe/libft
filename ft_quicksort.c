/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:34:41 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/12 14:13:53 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_quicksort(void *arr, int l, int r, \
			size_t elem_size, int (*cmp)(void *p1, void *p2))
{
	int i;
	int j;
	void *middle;
	char *carr;

	i = l;
	j = r;
	carr = (char*)arr;
	middle = ft_memdup(&((char*)arr)[((l + r) / 2) * elem_size], elem_size);
	if (middle)
	{
		do
		{
			while (cmp(middle, &carr[i * elem_size]) > 0)
				++i;
			while (cmp(middle, &carr[j * elem_size]) < 0)
				--j;
			if (i <= j)
				ft_swap(&carr[i++ * elem_size], &carr[j-- * elem_size], elem_size);
		}	while (i < j);
		if (i < r)
			ft_quicksort(arr, i, r, elem_size, cmp);
		if (j > l)
			ft_quicksort(arr, l, j, elem_size, cmp);
		free(middle);
	}
}
