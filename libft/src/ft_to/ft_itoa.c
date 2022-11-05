/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:31:56 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/21 14:22:06 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		count = 1;
	if (nb < 0)
	{
		count++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static char	*ft_mallfill(long nb, int count)
{
	char	*dst;

	dst = malloc(sizeof(char) * count + 1);
	if (!dst)
		return (NULL);
	dst[count--] = 0;
	if (nb == 0)
	{
		dst[0] = '0';
		return (dst);
	}
	if (nb < 0)
	{
		dst[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		dst[count--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = ft_count(nb);
	return (ft_mallfill(nb, count));
}
