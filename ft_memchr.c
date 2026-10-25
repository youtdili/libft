#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	d;
	unsigned char	*str;

	if (s == NULL || c < 0)
		return (NULL);
	str = (unsigned char *)s;
	d = (unsigned char)c;
	i = 0;
	while (str[i] && i <= n)
	{
		if (str[i] == d)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
