#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	char	*subs;
	int	l;

	l = (int)len;
	if (sizeof(char) * l > INT_MAX)
		return (NULL);
	subs = malloc(sizeof(char) * len);
	i = 0;
	while (s[start] && i < l)
	{
		subs[i] = s[start];
		start++;
		i++;
	}
	subs[len] = '\0';
	return (subs);
}

/*int	main(int ac, char **av)
{
	if (ac > 4)
		return (1);
	printf ("%s\n", ft_substr(av[1], (unsigned int)atoi(av[2]), (size_t)atoi(av[3])));
	return (0);
}*/
