/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 12:12:31 by oevtushe          #+#    #+#             */
/*   Updated: 2017/10/29 19:27:50 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	size_t	len;

	i = -1;
	len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[++i] != '\0')
		if (haystack[i] == needle[0])
			if (ft_strncmp(&haystack[i], needle, len) == 0)
				return ((char*)&haystack[i]);
	return (NULL);
}
