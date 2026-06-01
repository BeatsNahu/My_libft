/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:36:52 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/31 08:07:41 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*substr_from(unsigned int start, unsigned int end, const char *str)
{
	unsigned int	i;
	unsigned int	j;
	char			*new_str;

	i = 0;
	while (start != end)
	{
		end--;
		i++;
	}
	new_str = (char *)malloc(sizeof(char) * (i + 1));
	if (!new_str)
		return (NULL);
	j = 0;
	while (j < i)
	{
		new_str[j] = str[start];
		j++;
		start++;
	}
	new_str[j] = '\0';
	return (new_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	return (substr_from(i, j, s1));
}
