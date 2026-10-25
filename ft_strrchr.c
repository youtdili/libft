#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (s == NULL || c == 0)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
