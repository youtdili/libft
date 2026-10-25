#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s == NULL || fd < 0|| fd > 2)
		return ;
	i = 0;
	while (s[i])
		i++;
	write(fd, &s, i);
	write(fd, &s, i);
}
