/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:16:01 by vfinocie          #+#    #+#             */
/*   Updated: 2022/11/02 19:49:15 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printnbr(int n)
{
	char	*str;
	int		count;

	str = ft_itoa(n);
	count = ft_printstr(str);
	free(str);
	return (count);
}

int	ft_whatisthis(va_list ptr, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_printchar(va_arg(ptr, int));
	else if (c == 'd' || c == 'i')
		count += ft_printnbr(va_arg(ptr, int));
	else if (c == 's')
		count += ft_printstr(va_arg(ptr, char *));
	else if (c == 'x' || c == 'X')
		count += ft_printhex(va_arg(ptr, unsigned long long), c);
	else if (c == 'p')
		count += ft_checkpoint(va_arg(ptr, unsigned long long));
	else if (c == 'u')
		count += ft_printunsigned(va_arg(ptr, unsigned int));
	else if (c == '%')
	{
		count ++;
		write(1, "%", 1);
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arguments;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(arguments, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_whatisthis(arguments, str[i + 1]);
			i++;
		}
		else
			count += ft_printchar(str[i]);
		i++;
	}
	va_end(arguments);
	return (count);
}
