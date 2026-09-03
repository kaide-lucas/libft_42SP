/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:51:45 by kaidda-s          #+#    #+#             */
/*   Updated: 2025/09/08 12:52:11 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long ptr)
{
	int	n;

	n = 0;
	if (!ptr)
		return (print_str("(nil)"));
	n += print_str("0x");
	n += ft_hexa(ptr, "0123456789abcdef");
	return (n);
}

int	print_pointer(va_list args)
{
	void	*ptr;

	ptr = va_arg(args, void *);
	return (ft_pointer((unsigned long)ptr));
}
