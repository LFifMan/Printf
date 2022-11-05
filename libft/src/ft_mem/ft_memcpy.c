/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:02:32 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/14 15:56:16 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (ptr1 == 0 && ptr2 == 0)
		return (dst);
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dst);
}
