/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:15:11 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/07 13:18:21 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	long int	res;
	int			sign;

	i = 0;
	sign = 1;
	res = 0;
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
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return ((int)((int)sign * res));
}
