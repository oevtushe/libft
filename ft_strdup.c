/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 13:59:34 by oevtushe          #+#    #+#             */
/*   Updated: 2017/10/29 18:59:33 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		len;
	int		i;

	len = ft_strlen(s1);
	copy = (char*)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		copy[i] = s1[i];
	copy[i] = '\0';
	return (copy);
}
