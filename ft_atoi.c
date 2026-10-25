#include "libft.h"

int	ft_atoi(const char *str)

{
	int	i;
	int	j;
	int	x;

	if (str == NULL)
		return (0);
	i = 0;
	j = 1;
	x = 0;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = -j;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10 + str[i] - 48;
		i++;
	}
	return (x);
}
