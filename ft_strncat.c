/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 18:14:52 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/07 13:01:48 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	size_t len1;

	i = 0;
	len1 = ft_strlen(s1);
	j = len1;
	while (s2[i] != '\0' && i < n)
	{
		s1[j] = s2[i];
		++j;
		++i;
	}
	s1[j] = '\0';
	return (s1);
}
