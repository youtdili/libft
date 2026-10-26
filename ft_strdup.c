/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:47:18 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/25 23:43:37 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		j;

	j = 0;
	d = malloc(sizeof(char) * ft_strlen((char *)s));
	while (s[j])
	{
		d[j] = s[j];
		j++;
	}
	d[j] = '\0';
	return (d);
}
