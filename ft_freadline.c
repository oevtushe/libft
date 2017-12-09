/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freadline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:50:41 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/19 14:36:15 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

static void	ft_del(void *data, size_t size)
{
	++size;
	free(data);
}

static char	*ft_lsttstr(t_list *lst)
{
	size_t	i;
	char	*result;

	i = 0;
	result = ft_strnew(ft_lstlen(lst));
	if (result)
	{
		while (lst)
		{
			result[i++] = *((char*)lst->content);
			lst = lst->next;
		}
	}
	return (result);
}

char		*ft_freadline(int fd)
{
	int		i;
	char	c;
	t_list	*lst;
	char	*str;
	t_list	*tmp;

	str = NULL;
	lst = NULL;
	if (fd != -1)
	{
		while ((i = read(fd, &c, 1)) > 0 && c != '\n')
		{
			tmp = ft_lstnew(&c, sizeof(char));
			if (!tmp)
			{
				ft_lstdel(&lst, ft_del);
				return (NULL);
			}
			ft_lstappend(&lst, tmp);
		}
		str = ft_lsttstr(lst);
	}
	ft_lstdel(&lst, ft_del);
	return (str);
}
