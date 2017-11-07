/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:15:11 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/07 18:04:55 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_overflow(int sign, char val, long int cur)
{
	long int diff;

	diff = LONG_INT_MAX / 10 - cur;
	if ((val >= '0' && val <= '9' && diff >= 0))
	{
		if (diff > 0 || (sign > 0 && ((val - '0' <= LONG_INT_MAX % 10) || \
					(sign < 0 && val - '0' <= LONG_INT_MAX % 10 + 1))))
			return (0);
	}
	return (1);
}

int				ft_atoi(const char *str)
{
	int					i;
	long int			res;
	int					sign;
	int					len;

	i = 0;
	sign = 1;
	res = 0;
	len = -1;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\t' || \
			str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
		++i;
	if (str[i] == '-')
	{
		sign = -1;
		++i;
	}
	else if (str[i] == '+')
		++i;
	while (++len < 18 && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	if (!is_overflow(sign, str[i], res))
		return ((int)(res * 10 + str[i] - '0') * sign);
	else
		return (sign > 0 ? -1 : 0);
}
