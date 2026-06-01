/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:08:41 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/01 20:48:57 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*text_dest;
	unsigned char	*text_src;

	text_dest = (unsigned char *)dest;
	text_src = (unsigned char *)src;
	i = 0;
	while (i != n)
	{
		text_dest[i] = text_src[i];
		i++;
	}
	return (dest);
}
