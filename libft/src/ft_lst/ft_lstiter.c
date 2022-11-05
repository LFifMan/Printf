/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:44:56 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/20 17:51:45 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int		i;
	int		count;
	void	*content;

	i = ft_lstsize(lst);
	count = 0;
	while (count < i)
	{
		content = lst->content;
		if (lst)
			f(content);
		lst = lst->next;
		count++;
	}
}
