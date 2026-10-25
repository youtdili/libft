#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*int	main(int ac, char **av)
{
	if (ac != 3)
		return(1);
	ft_bzero(av[1], atoi((const char *)av[2]));
	return (0);
}*/
