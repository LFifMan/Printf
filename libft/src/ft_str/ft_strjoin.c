/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:17:27 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/16 21:20:59 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = malloc(lens1 + lens2 +1);
	if (!str)
		return (NULL);
	while (s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = 0;
	return (str);
}
