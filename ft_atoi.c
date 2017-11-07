/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:15:11 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/07 18:59:00 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_overflow(int sign, char val, long int cur)
{
	long int diff;

	diff = LONG_INT_MAX / 10 - cur;
	if (diff >= 0)
	{
		if (diff > 0 || (sign > 0 \
					&& ((val - '0' <= LONG_INT_MAX % 10) || \
					(sign < 0 && val - '0' <= LONG_INT_MAX % 10 + 1))))
			return (0);
	}
	return (1);
}

static int		last_check(long int val, char symb, int sign)
{
	if (ft_isdigit(symb))
	{
		if (!is_overflow(sign, symb, val))
			return ((int)(val * 10 + symb - '0') * sign);
		else
			return (sign > 0 ? -1 : 0);
	}
	return (int)(val * sign);
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
	while (++len < 18 && ft_isdigit(str[i]))
		res = res * 10 + str[i++] - '0';
	return (last_check(res, str[i], sign));
}
