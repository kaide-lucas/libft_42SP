/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 20:19:11 by kaidda-s          #+#    #+#             */
/*   Updated: 2025/09/08 12:52:18 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	num;
	int		i;

	num = n;
	i = 0;
	if (num < 0)
	{
		i += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
		i += ft_putnbr(num / 10);
	i += ft_putchar((num % 10) + '0');
	return (i);
}

int	print_int(va_list args)
{
	int	n;

	n = va_arg(args, int);
	return (ft_putnbr(n));
}
