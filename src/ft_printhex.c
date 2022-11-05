/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:06:26 by vfinocie          #+#    #+#             */
/*   Updated: 2022/11/02 19:49:33 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"
#include <unistd.h>

void	ft_printhexnbr(unsigned long long n, char c)
{
	if (n >= 16)
	{
		ft_printhexnbr(n / 16, c);
		ft_printhexnbr(n % 16, c);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (c == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (c == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}	
	}
}

int	ft_countnbr(unsigned long long n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	ft_printhex(unsigned long long n, char c)
{
	int	count;

	count = 0;
	if (n == 0)
		count += write(1, "0", 1);
	else
	{
		ft_printhexnbr(n, c);
		count += ft_countnbr(n);
	}
	return (count);
}
