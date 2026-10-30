/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:31:37 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/29 03:38:40 by younessso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (n == 0 || !s1)
		return (NULL);
	if (!s2)
		return ((char *)s1);
	i = 0;
	j = 0;
	while (s1[i] && i < n)
	{
		while (s1[i + j] == s2[j] && (j + i) < n)
		{
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
