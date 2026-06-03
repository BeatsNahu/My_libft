/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <alopez-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 10:59:47 by alopez-t          #+#    #+#             */
/*   Updated: 2026/06/03 10:59:48 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	counted;
	int	i;

	i = 0;
	counted = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			counted++;
		i++;
	}
	return (counted);
}

static void	free_all(char **result, int reached)
{
	while (reached > 0)
	{
		reached--;
		free(result[reached]);
	}
	free(result);
}

static int	process_words(char const *s, char c, char **result, int *i, int j)
{
	int	start;
	int	len;

	start = *i;
	while (s[*i] != c && s[*i] != '\0')
		(*i)++;
	len = *i - start;
	result[j] = ft_substr(s, start, len);
	if (!result[j])
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			if (!process_words(s, c, result, &i, j))
			{
				free_all(result, j);
				return (NULL);
			}
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}
