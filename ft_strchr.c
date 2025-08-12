/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:09:11 by kaidda-s          #+#    #+#             */
/*   Updated: 2025/08/08 11:20:20 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == uc)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (uc == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
