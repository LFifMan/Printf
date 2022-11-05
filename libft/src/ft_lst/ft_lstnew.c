/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:50:41 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/19 20:36:05 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*instance;

	instance = malloc(sizeof(t_list));
	if (!instance)
		return (NULL);
	instance->content = content;
	instance->next = NULL;
	return (instance);
}
