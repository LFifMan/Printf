/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:33:04 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/16 19:56:10 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		len = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	while (i < len && s[j] != 0)
	{
		if (j >= start)
			dst[i++] = s[j];
		j++;
	}
	dst[i] = 0;
	return (dst);
}
