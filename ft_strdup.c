/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 10:57:11 by kaidda-s          #+#    #+#             */
/*   Updated: 2025/08/15 14:09:06 by kaidda-s         ###   ########.fr       */
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

// #include <stdio.h>	
// int main()
// {
// 	char *origin = "Abacate";
// 	char *copy = ft_strdup(origin);
// 	printf("%s\n", copy);
// 	free(copy);
// 	return(0);
// }