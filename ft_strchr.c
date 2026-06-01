/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:06:17 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/04 16:13:29 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	letter;
	int				i;

	i = 0;
	letter = (unsigned char) c;
	while (s[i] != letter && s[i] != '\0')
		i++;
	if (s[i] == letter)
		return ((char *)&s[i]);
	return (NULL);
}
