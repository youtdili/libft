/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:31:37 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/25 22:31:55 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i] && j <= n)
	{
		if (s1[i] == s2[j])
		{
			j++;
			if (j == n)
			{
				return ((char *)&s1[i - j]);
			}
		}
		i++;
	}
	return (NULL);
}
