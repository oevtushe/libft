/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:20:08 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/14 17:12:29 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_ltsa(t_list *lst)
{
	char	**arr;
	int		len;
	int		i;

	i = 0;
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
	return (arr);
}

static void	ft_mydel(void *cnt, size_t size)
{
	size++;
	free(cnt);
}

static int	add_word(t_list **lst, char const *s, int begin, int end)
{
	char *tmp;

	tmp = ft_strsub(s, begin, end);
	if (!tmp)
		return (0);
	ft_lstappend(lst, ft_lstnew(tmp, ft_strlen(tmp) + 1));
	free(tmp);
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	t_list	*lst;
	int		begin;
	int		end;

	begin = 0;
	lst = NULL;
	arr = NULL;
	if (s)
	{
		while ((end = ft_strfnd(&s[begin], c)) != -1)
		{
			if (end)
				if (!add_word(&lst, s, begin, end))
					return (NULL);
			begin += end + 1;
		}
		if ((end = ft_strlen(&s[begin])))
			if (!add_word(&lst, s, begin, end))
				return (NULL);
		arr = ft_ltsa(lst);
		ft_lstdel(&lst, ft_mydel);
	}
	return (arr);
}
