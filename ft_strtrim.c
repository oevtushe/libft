/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:38:05 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/07 13:34:38 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		begin;
	int		end;
	char	*res;

	if (!s)
		return (NULL);
	begin = 0;
	end = ft_strlen(s) - 1;
	while (begin < end && \
			(s[begin] == ' ' || s[begin] == '\t' || s[begin] == '\n'))
		++begin;
	while (end >= begin && (s[end] == ' ' || s[end] == '\t' || s[end] == '\n'))
		--end;
	res = ft_strsub(s, begin, end - begin + 1);
	return (res);
}
