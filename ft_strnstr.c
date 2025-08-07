/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 22:32:21 by kaide             #+#    #+#             */
/*   Updated: 2025/08/07 18:25:21 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	i;

	i = 0;
	a = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((big[i] != '\0') && (i < len))
	{
		while ((i + a < len) && (big[i + a] == little[a])
			&& (little[a] != '\0'))
		{
			a++;
		}
		if (little[a] == '\0')
			return ((char *)&big[i]);
		a = 0;
		i++;
	}
	return (NULL);
}
