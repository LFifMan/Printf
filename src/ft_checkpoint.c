/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkpoint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:30:56 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/26 10:25:37 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_pointlen(unsigned long long n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 16;
	}
	return (count);
}

void	ft_printpoint(unsigned long long n)
{
	if (n >= 16)
	{
		ft_printpoint(n / 16);
		ft_printpoint(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_checkpoint(unsigned long long n)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (n == 0)
		count += write(1, "0", 1);
	else
	{
		ft_printpoint(n);
		count += ft_pointlen(n);
	}
	return (count);
}
