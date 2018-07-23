/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcontains.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 11:42:33 by oevtushe          #+#    #+#             */
/*   Updated: 2018/07/23 19:03:30 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Function checks if array of pointers contains a given data
** Comparison is made by function @param check
**
** check function has to return 1 if elements is equall, 0 otherwise
** @return		1 if @param data is present in @param arr
**				0 otherwise
*/

int		ft_arrcontains(void **arr, int size, void *data, int (*check)(void *elem, void *data))
{
	int i;

	i = 0;
	if (arr && check)
	{
		while (i < size)
			if (check(arr[i++], data))
				return (1);
	}
	return (0);
}
