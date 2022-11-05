/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:03:19 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/14 16:24:07 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (ptr1 == 0 && ptr2 == 0)
		return (dst);
	if (ptr1 < ptr2)
	{
		while (len--)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
		return (dst);
	}
	while (i < len)
	{
		ptr1[len - 1] = ptr2[len - 1];
		len--;
	}
	return (dst);
}
