#include "libft.h"

/*char	f(unsigned int i, char c)
{
	(void)i;
	return (c);
}
*/
char *ft_strmapi(char const *s, char (*f)(unsigned int i, char c))
{
	unsigned int	i;
	char	*new;

	i = 0;
	while (s[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i + 1] = '\0';
	return (new);
}
