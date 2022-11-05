/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfinocie <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:23:35 by vfinocie          #+#    #+#             */
/*   Updated: 2022/10/26 10:38:20 by vfinocie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);

int		ft_printnbr(int i);
int		ft_printchar(int c);
int		ft_printstr(char *str);

int		ft_printhex(unsigned int n, char c);
int		ft_countnbr(unsigned int n);
void	ft_printfhexnbr(unsigned int n);

void	ft_printpoint(unsigned int n);
int		ft_checkpoint(unsigned long long n);
int		ft_pointlen(unsigned long long n);

int		ft_printunsigned(unsigned int n);
int		ft_unsignedlen(unsigned int n);
char	*ft_unsigneditoa(unsigned int n);

#endif
