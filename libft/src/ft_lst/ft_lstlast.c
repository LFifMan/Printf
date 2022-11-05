/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:41:10 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/20 13:30:39 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		size;
	int		count;
	t_list	*tmp;

	tmp = lst;
	size = ft_lstsize(lst);
	count = 1;
	while (count < size)
	{
		tmp = tmp->next;
		count++;
	}
	return (tmp);
}
