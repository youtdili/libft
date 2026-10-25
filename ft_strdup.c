#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int	j;

	j = 0;
	d = malloc(sizeof(char) * ft_strlen((char *)s));
	while (s[j])
	{
		d[j] = s[j];
		j++;
	}
	d[j] = '\0';
	return (d);
}
