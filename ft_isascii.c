#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= '\0' && (unsigned char)c <= '\127')
		return (1);
	return (0);
}
