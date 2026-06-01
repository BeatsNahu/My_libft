/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:11:07 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/05 12:41:10 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*text_dest;
	unsigned char	*text_src;

	text_dest = (unsigned char *)dest;
	text_src = (unsigned char *)src;
	if ((dest == src) || (dest == NULL && src == NULL))
		return (dest);
	if (dest > src)
	{
		while (n > 0)
		{
			text_dest[n - 1] = text_src[n - 1];
			n--;
		}
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		text_dest[i] = text_src[i];
		i++;
	}
	return (dest);
}
