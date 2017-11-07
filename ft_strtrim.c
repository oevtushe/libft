/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:38:05 by oevtushe          #+#    #+#             */
/*   Updated: 2017/10/30 12:18:29 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		begin;
	int		end;
	char	*res;

	begin = 0;
	end = ft_strlen(s) - 1;
	while (s[begin] == ' ' || s[begin] == '\t' || s[begin] == '\n')
		++begin;
	while (end > 0 && (s[end] == ' ' || s[end] == '\t' || s[end] == '\n'))
		--end;
	res = ft_strsub(s, begin, end - begin + 1);
	return (res);
}
