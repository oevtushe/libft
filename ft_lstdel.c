/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oevtushe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:50:57 by oevtushe          #+#    #+#             */
/*   Updated: 2017/10/31 17:22:01 by oevtushe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp;

	while ((*alst) != NULL)
	{
		tmp = *alst;
		*alst = (*alst)->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
	}
}
