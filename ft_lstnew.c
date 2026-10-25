#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list) * 2);
	new = (t_list *)content;
	new->next = NULL;
	return (new);
}
