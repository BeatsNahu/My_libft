/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:20:28 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/02 22:29:36 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*src;
	unsigned char	caracter;

	src = (unsigned char *)s;
	caracter = (unsigned char)c;
	i = 0;
	while (i < n && src[i] != caracter)
		i++;
	if (i < n)
		return ((void *)&src[i]);
	return (NULL);
}
