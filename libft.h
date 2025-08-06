/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaidda-s <kaidda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:01:56 by kaidda-s          #+#    #+#             */
/*   Updated: 2025/08/06 10:03:30 by kaidda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stddef.h>

int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_toupper(char c);
int		ft_isprint(int c);
int		ft_strlen(const char *c);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);

#endif