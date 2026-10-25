#include "libft.h"

static void del(void *vlb)
{
	free(vlb);
	free(&vlb);
}
void ft_lstclear(t_list **lst, void (*del)(void*));
{
	if (!lst || !del)
		return ;
	while (lst != NULL)
	{
		del(&lst);
		lst->next;
		lst = lst->next;
	}
	lst = NULL;
}
