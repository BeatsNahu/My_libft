/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 11:20:21 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/03 11:28:38 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		size;
	char	*text_dup;

	size = ft_strlen(src);
	text_dup = (char *) malloc ((size + 1) * sizeof (char));
	i = 0;
	if (!text_dup)
		return (NULL);
	while (src[i] != '\0')
	{
		text_dup[i] = src[i];
		i++;
	}
	text_dup[i] = '\0';
	return (text_dup);
}
