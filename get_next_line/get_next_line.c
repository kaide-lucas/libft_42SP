/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 22:35:57 by codespace         #+#    #+#             */
/*   Updated: 2025/10/10 14:21:31 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_and_join(int fd, char *stash, char *buffer)
{
	char	*temp;
	ssize_t	bytes_read;

	if (!buffer)
		return (free_and_null(stash));
	bytes_read = 1;
	while (bytes_read > 0 && (!stash || !ft_strchr(stash, '\n')))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(stash, buffer);
		if (!temp)
			return (free_and_null(stash));
		free(stash);
		stash = temp;
	}
	if (bytes_read < 0)
		return (free_and_null(stash));
	return (stash);
}

char	*extract_line(char *stash)
{
	size_t	i;
	size_t	len;
	char	*line;

	if (!stash || !stash[0])
		return (NULL);
	i = 0;
	len = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		len = i + 2;
	else
		len = i + 1;
	line = malloc(len);
	if (!line)
		return (NULL);
	ft_strlcpy(line, stash, len);
	return (line);
}

char	*free_and_null(char *ptr)
{
	if (ptr)
		free(ptr);
	return (NULL);
}

char	*update_stash(char *stash)
{
	char	*new_stash;
	size_t	i;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
		return (free_and_null(stash));
	new_stash = malloc(ft_strlen(stash) - i);
	if (!new_stash)
		return (free_and_null(stash));
	ft_strlcpy(new_stash, &stash[i + 1], ft_strlen(stash) - i);
	free(stash);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (free_and_null(stash));
	stash = read_and_join(fd, stash, buffer);
	free(buffer);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = update_stash(stash);
	return (line);
}
