/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:40:00 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/25 23:46:26 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	d;
	unsigned char	*str;
	size_t			i;

	if (s == NULL || c < 0)
		return (NULL);
	str = (unsigned char *)s;
	d = (unsigned char)c;
	i = 0;
	while (str[i] && i <= n)
	{
		if (str[i] == d)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
