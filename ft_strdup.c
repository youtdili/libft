/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:47:18 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/29 18:53:33 by younessso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	j;
	size_t	i;

	if (!s)
		return (NULL);
	j = 0;
	i = ft_strlen((char *)s);
	d = malloc(sizeof(char) * (i + 1));
	if (!d)
		return (NULL);
	while (j < i)
	{
		d[j] = s[j];
		j++;
	}
	d[i] = '\0';
	return (d);
}
