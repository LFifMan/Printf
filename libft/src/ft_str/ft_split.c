/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:20:26 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/21 14:19:58 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_mallocfill(const char **s, char c)
{
	int		i;
	char	*dst;

	i = 0;
	while (*(*s + i) && *(*s + i) != c)
		i++;
	dst = malloc(sizeof(char) * i + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (*(*s + i) && *(*s + i) != c)
	{
		dst[i] = *(*s + i);
		i++;
	}
	dst[i] = 0;
	*s += i;
	return (dst);
}

static int	ft_countwords(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != 0)
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		i;
	char	**dst;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	dst = malloc(sizeof(char *) * (count + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (*s && i < count)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			dst[i] = ft_mallocfill(&s, c);
			i++;
		}
	}
	dst[i] = 0;
	return (dst);
}
