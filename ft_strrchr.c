/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:09:59 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/04 16:15:12 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	letter;
	int				i;
	int				last_occurrence;

	i = 0;
	last_occurrence = 0;
	letter = (unsigned char) c;
	if (letter == 0)
		last_occurrence = ft_strlen(s);
	while (s[i] != '\0')
	{
		if (s[i] == letter)
			last_occurrence = i;
		i++;
	}
	if (s[last_occurrence] == letter)
		return ((char *)&s[last_occurrence]);
	return (NULL);
}
