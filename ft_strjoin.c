/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 09:55:05 by oevtushe          #+#    #+#             */
/*   Updated: 2017/10/30 10:35:44 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = ft_strnew(sizeof(int) * (len1 + len2 + 1));
	if (res != NULL)
	{
		ft_strcat(res, s1);
		ft_strcat(res, s2);
	}
	return (res);
}
