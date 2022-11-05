/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:34:00 by vfinocie          #+#    #+#             */
/*   Updated: 2022/11/01 17:31:11 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <unistd.h>

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_printstr("(null)"));
	while (str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_unsignedlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_unsigneditoa(unsigned int n)
{
	int		len;
	char	*str;

	len = ft_unsignedlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = 0;
	while (n != 0)
	{
		str[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (str);
}

int	ft_printunsigned(unsigned int n)
{
	int		count;
	char	*str;

	count = 0;
	if (n == 0)
		count += write(1, "0", 1);
	else
	{
		str = ft_unsigneditoa(n);
		count += ft_printstr(str);
		free(str);
	}
	return (count);
}
