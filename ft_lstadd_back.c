#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (lst != NULL)
	{
		lst->next;
		lst = lst->next;
	}
	lst = new;
}
