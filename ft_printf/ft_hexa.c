/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:41:55 by kaidda-s          #+#    #+#             */
/*   Updated: 2025/09/08 12:51:58 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long int n, const char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_hexa(n / 16, base);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	print_hexa(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_hexa(n, "0123456789abcdef"));
}

int	print_hexa_upper(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_hexa(n, "0123456789ABCDEF"));
}
