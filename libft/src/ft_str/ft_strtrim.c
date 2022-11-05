/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:28:47 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/21 14:18:16 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_getstart(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i] != 0 && set[j] != 0)
	{
		if (s1[i] == set[j])
		{
			count++;
			j = 0;
			i++;
		}
		else
			j++;
	}
	return (count);
}

static size_t	ft_getend(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while (i > 0)
	{
		if (ft_strchr((char *)set, s1[i]) == 0)
			break ;
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = ft_getstart(s1, set);
	j = ft_getend(s1, set);
	if (i == ft_strlen(s1) && j == 1)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	str = (char *)malloc(sizeof (char) * (j - i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, j - i + 1);
	return (str);
}
