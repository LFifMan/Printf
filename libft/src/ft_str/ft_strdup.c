/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:46:34 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/14 20:22:44 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	if (s1 == NULL)
		return ((char *)s1);
	ptr = malloc(len + 1);
	if (!ptr)
		return (ptr);
	while (s1[i] != 0)
	{
		ptr[i] = (char)s1[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
