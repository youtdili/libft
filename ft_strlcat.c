/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:45:48 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/25 22:45:52 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x] && x <= dsize)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	x = x + i;
	dest[x] = '\0';
	return (x);
}
