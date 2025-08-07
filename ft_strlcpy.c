/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:20:17 by kaidda-s          #+#    #+#             */
/*   Updated: 2025/08/07 18:04:29 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *origin, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (size > 0)
	{
		while (i < size - 1 && origin[i] != '\0')
		{
			dest[i] = origin[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (origin[count] != '\0')
		count++;
	return (count);
}
