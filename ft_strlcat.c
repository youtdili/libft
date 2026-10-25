#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x] && x <= dsize)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	x = x + i;
	dest[x] = '\0';
	return (x);
}
