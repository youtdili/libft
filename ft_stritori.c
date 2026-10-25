#include "libft.h"
/*#include <stdio.h>
#include <unistd.h>*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main()
{
	char s[] = "bonjour";
	printf("%s\n", s);
	ft_striteri(s, f);
	printf("%s\n", s);
	return (0);
}*/
