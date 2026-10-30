/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesssouw </var/spool/mail/younesss      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 03:22:33 by younessso         #+#    #+#             */
/*   Updated: 2026/10/30 04:16:14 by younessso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy;
	t_list	*cpy2;
	void	*contentcpy;

	if (!del || !lst || !f)
		return (NULL);
	cpy = NULL;
	while (lst)
	{
		contentcpy = f(lst->content);
		cpy2 = ft_lstnew(contentcpy);
		if (cpy == NULL)
		{
			del(contentcpy);
			ft_lstclear(&cpy, del);
			return (NULL);
		}
		ft_lstadd_back(&cpy, cpy2);
		lst = lst->next;
	}
	return (cpy);
}
