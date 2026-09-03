/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 12:42:52 by codespace         #+#    #+#             */
/*   Updated: 2025/09/08 12:56:21 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	print_char(va_list args);
int	print_str(char *s);
int	print_int(va_list args);
int	print_unsigned(va_list args);
int	ft_hexa(unsigned long int n, const char *base);
int	print_hexa(va_list args);
int	print_hexa_upper(va_list args);
int	print_pointer(va_list args);

#endif
