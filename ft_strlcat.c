/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:45:48 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/30 04:24:15 by younessso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	if (dest == NULL)
		return (0);
	if (src == NULL)
		return (ft_strlen(src));
	i = ft_strlen(dest);
	if (size == 0 || size <= i)
		return (ft_strlen(src) + size);
	x = 0;
	size = size - i - 1;
	while (src[x] && x < size)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (i - x + ft_strlen(src));
}
