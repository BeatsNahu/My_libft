/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <alopez-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:01:02 by alopez-t          #+#    #+#             */
/*   Updated: 2026/06/03 11:01:02 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*substr_from(size_t start, size_t end, const char *str)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * ((end - start) + 1));
	if (!new_str)
		return (NULL);
	ft_memcpy(new_str, &str[start], (end - start));
	new_str[end - start] = '\0';
	return (new_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	return (substr_from(i, j, s1));
}
