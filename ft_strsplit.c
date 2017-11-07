/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:20:08 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/02 19:27:34 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_ltsa(t_list *lst)
{
	char	**arr;
	int		len;
	int		i;
	char	c[1];

	i = 0;
	c[0] = '\0';
	len = ft_lstlen(lst);
	arr = (char**)ft_memalloc(sizeof(char*) * (len + 1));
	if (arr != NULL)
	{
		while (lst != NULL)
		{
			arr[i++] = ft_strdup((char*)lst->content);
			lst = lst->next;
		}
	}
	arr[len] = ft_strdup(c);
	return (arr);
}

static void	ft_mydel(void *cnt, size_t size)
{
	size++;
	free(cnt);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	t_list	*lst;
	char	*tmp;
	int		begin;
	int		end;

	begin = 0;
	lst = NULL;
	while ((end = ft_strfnd(&s[begin], c)) != -1)
	{
		if (end != 0 && begin != 0)
		{
			tmp = ft_strsub(s, begin, end);
			ft_lstappend(&lst, ft_lstnew(tmp, ft_strlen(tmp) + 1));
			free(tmp);
		}
		begin += end + 1;
	}
	arr = ft_ltsa(lst);
	ft_lstdel(&lst, ft_mydel);
	return (arr);
}
