/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:49:41 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/03 10:07:10 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	symbol;
	int	result;

	i = 0;
	symbol = 1;
	result = 0;
	while (nptr[i] >= 1 && nptr[i] <= 32)
		i++;
	if (nptr[i] == '-')
	{
		symbol = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] == '0')
		i++;
	while (nptr[i] >= '0' && nptr [i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return (result * symbol);
}
