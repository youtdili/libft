#include "libft.h"
static void	del(void *DIE)
{
	free(DIE);
}
void	ft_lstdelone(t_list *lst, void (*del)(void*));
{
	del(lst);
	free(lst);
}
