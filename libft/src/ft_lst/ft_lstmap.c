/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:54:01 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/20 20:31:04 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	if (!f || !lst || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
