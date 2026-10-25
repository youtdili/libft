#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const char	*str1;
	const char	*str2;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	i = 0;
	while (str1[i] && str2[i] && i <= n)
	{
		if (str1[i] - str2[i] != 0)
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}
