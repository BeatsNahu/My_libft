/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 00:04:59 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/31 00:06:56 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_next;

	while (*lst != NULL)
	{
		tmp_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp_next;
	}
}
