/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:20:17 by kaidda-s          #+#    #+#             */
/*   Updated: 2025/08/06 10:09:18 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *origin, size_t size)
{
	size_t	i;

	i = 0;
	while (origin[i] != '\0' && i < size -1)
	{
		dest[i] = origin[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (ft_strlen(origin));
}
