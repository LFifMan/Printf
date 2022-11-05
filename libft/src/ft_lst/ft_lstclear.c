/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:19:48 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/20 17:44:04 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void	*content;
	int		i;
	int		count;
	t_list	*tmp;

	count = 0;
	i = ft_lstsize(*lst);
	tmp = *lst;
	while (count < i)
	{
		content = tmp->content;
		if (tmp)
		{
			del(content);
			free(tmp);
		}
		tmp = tmp->next;
		count++;
	}
	*lst = NULL;
}
