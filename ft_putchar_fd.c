#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (c == NULL || fd > 2 || fd < 0)
		return ;
	write(fd, c, 1);
}
