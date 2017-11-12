/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 12:03:03 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/12 16:30:31 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *nlst;
	t_list *nlst_r;

	if (!f)
		return (NULL);
	nlst = ft_lstnew(NULL, 0);
	nlst_r = nlst;
	while (lst)
	{
		tmp = f(lst);
		if (tmp)
		{
			nlst_r->next = tmp;
			nlst_r = nlst_r->next;
		}
		lst = lst->next;
	}
	tmp = nlst;
	nlst = nlst->next;
	free(tmp);
	return (nlst);
}
