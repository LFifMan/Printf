/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:01:16 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/13 19:10:04 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != 0)
		i++;
	while (src[j] != 0 && i + j < dstsize - 1 && dstsize != 0)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j <= dstsize)
		dst[i + j] = 0;
	while (src[j] != 0)
		j++;
	if (dstsize == 0)
		return (j);
	if (dstsize > i)
		return (i + j);
	else
		return (dstsize + j);
}
