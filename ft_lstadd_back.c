/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:52:12 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/30 04:18:06 by younessso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new)
	{
		if (*lst == NULL)
		{
			*lst = new;
			*lst->next = NULL;
			return ;
		}
		while (*lst != NULL)
			*lst = *lst->next;
		*lst = new;
		*lst->next = NULL;
	}
}
