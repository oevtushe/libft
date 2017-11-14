/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freadline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:50:41 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/14 11:15:09 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

static void	ft_del(void *data, size_t size)
{
	size = 0;
	free((char*)data);
}

static char	*ft_lsttstr(t_list *lst)
{
	int		i;
	int		size;
	char	*result;

	i = 0;
	size = ft_lstlen(lst);
	result = ft_strnew(size * sizeof(char));
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

	str = NULL;
	if (fd != -1)
	{
		lst = NULL;
		while ((i = read(fd, &c, 1)) > 0 && c != '\n')
			ft_lstappend(&lst, ft_lstnew(&c, sizeof(char)));
		str = ft_lsttstr(lst);
		ft_lstdel(&lst, ft_del);
	}
	return (str);
}
