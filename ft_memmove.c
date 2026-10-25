#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;


	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!(dest <= src))
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
	return ((void *)d);
}
