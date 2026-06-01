/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:13:00 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/20 20:38:06 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*text;

	text = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		text[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
