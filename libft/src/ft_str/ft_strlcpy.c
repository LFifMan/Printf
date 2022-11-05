/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:01:05 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/13 17:54:29 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != 0 && i < dstsize - 1 && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = 0;
	while (src[j] != 0)
		j++;
	if (dstsize <= j)
		return (j);
	return (i);
}
