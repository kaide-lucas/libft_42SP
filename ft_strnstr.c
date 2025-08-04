/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaide <kaide@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 22:32:21 by kaide             #+#    #+#             */
/*   Updated: 2025/08/03 20:28:36 by kaide            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;
	size_t	i;

	i = 0;
	a = 0;
	b = 0;
	if (little[b] == '\0')
	{
		return ((char *)big);
	}
	while ((big[i] != '\0') && (i < len))
	{
		while ((big[i + a] == little[a]) && (little[a] != '\0'))
		{
			a++;
		}
		if (little[a] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
