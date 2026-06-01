/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 00:10:38 by alopez-t          #+#    #+#             */
/*   Updated: 2026/05/31 00:19:08 by alopez-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_save;
	t_list	*tmp_save;

	new_save = NULL;
	while (lst != NULL)
	{
		tmp_save = ft_lstnew((*f)(lst->content));
		if (!tmp_save)
		{
			ft_lstclear(&new_save, del);
			return (NULL);
		}
		ft_lstadd_back(&new_save, tmp_save);
		lst = lst->next;
	}
	return (new_save);
}
