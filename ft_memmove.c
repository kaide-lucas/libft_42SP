/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:40:55 by kaide             #+#    #+#             */
/*   Updated: 2026/01/22 00:12:55 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_len;
	unsigned char		*src_len;
	size_t				i;

	if ((dest == src) || (n == 0))
	{
		return (dest);
	}
	dest_len = (unsigned char *)dest;
	src_len = (unsigned char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			dest_len[i] = src_len[i];
			i++;
		}
	}
	else
	{
		while (n--)
			dest_len[n] = src_len[n];
	}
	return (dest);
}
