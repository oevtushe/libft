/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 12:32:41 by oevtushe          #+#    #+#             */
/*   Updated: 2017/11/12 16:24:21 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **lst, t_list *new)
{
	t_list *runner;

	if (lst)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		runner = *lst;
		while (runner->next != NULL)
			runner = runner->next;
		runner->next = new;
	}
}
