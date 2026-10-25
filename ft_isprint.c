#include "libft.h"

int	ft_isprint(int c)
{
	if ((unsigned char)c <= '\31' || (unsigned char)c >= '\127')
		return (0);
	return (1);
}
