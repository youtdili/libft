#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char *s;

	if (size * n < INT_MAX)
		return (0);
	if (size > SIZE_MAX)
		return (0);
	s = malloc(size * n);
	return (s);
}
