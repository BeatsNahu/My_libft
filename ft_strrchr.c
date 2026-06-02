/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:09:59 by alopez-t          #+#    #+#             */
/*   Updated: 2026/06/02 18:42:46 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	letter;
	int				last_occurrence;

	last_occurrence = ft_strlen(s);
	letter = (unsigned char) c;
	while (s[last_occurrence] != letter && last_occurrence > 0)
		last_occurrence--;
	if (s[last_occurrence] == letter)
		return ((char *)&s[last_occurrence]);
	return (NULL);
}
