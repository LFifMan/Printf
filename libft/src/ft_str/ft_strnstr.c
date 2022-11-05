/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:11:48 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/21 13:23:25 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	if (*tofind == 0)
		return ((char *)str);
	if (str == tofind)
		return ((char *)str);
	j = 0;
	while (str[j] != 0 && j < n)
	{
		i = 0;
		if (str[i + j] == tofind[i])
		{
			tmp = j;
			while (str[i + j] == tofind[i] && i + j < n && str[i + j])
				i++;
			if (tofind[i] == 0)
				return ((char *)&str[tmp]);
		}
		j++;
	}
	return (NULL);
}
