/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 10:57:11 by kaidda-s          #+#    #+#             */
/*   Updated: 2026/01/22 00:13:34 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*copy_str;

	size = (ft_strlen(s) + 1);
	copy_str = (char *)malloc(size * sizeof(char));
	if (!copy_str)
	{
		return (NULL);
	}
	ft_memcpy(copy_str, s, size);
	return (copy_str);
}
