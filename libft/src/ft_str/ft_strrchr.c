/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:20:28 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/21 13:15:28 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}	
	return (NULL);
}
