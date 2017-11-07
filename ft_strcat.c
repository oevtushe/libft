/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 17:47:03 by oevtushe          #+#    #+#             */
/*   Updated: 2017/10/29 18:58:47 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;
	int len1;
	int len2;

	i = -1;
	len1 = (int)ft_strlen(s1);
	len2 = (int)ft_strlen(s2);
	j = len1;
	while (++i < len2)
	{
		s1[j] = s2[i];
		++j;
	}
	s1[j] = '\0';
	return (s1);
}
