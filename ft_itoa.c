/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 18:44:51 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/19 13:49:23 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intln_help(long int n)
{
	if (n <= 9)
		return (1);
	return (1 + ft_intln_help(n / 10));
}

static int		ft_intln(int n)
{
	long int	nn;
	int			extra;

	nn = n;
	extra = 0;
	if (nn < 0)
	{
		extra = 1;
		nn *= -1;
	}
	return (extra + ft_intln_help(nn));
}

static void		ft_itoa_help(long int n, char *str, int *idx)
{
	if (n <= 9)
	{
		str[(*idx)++] = n + '0';
		return ;
	}
	ft_itoa_help(n / 10, str, idx);
	str[(*idx)++] = (n % 10) + '0';
}

char			*ft_itoa(int n)
{
	char		*res;
	long int	nn;
	int			idx;

	idx = 0;
	nn = n;
	res = ft_strnew(ft_intln(n));
	if (res)
	{
		if (nn < 0)
		{
			res[idx++] = '-';
			nn *= -1;
		}
		ft_itoa_help(nn, res, &idx);
	}
	return (res);
}
