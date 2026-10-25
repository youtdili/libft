#include <unistd.h>
#include "libft.h"
static void	putch(char c, int fd)
{
	write(fd, &c, 1);
}
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-214783648", 10);
	putch(n % 10 + 48, fd);
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
}
