/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:35:00 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/26 00:04:32 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int		i;
	int		l;

	l = (int)len;
	if (sizeof(char) * l > INT_MAX)
		return (NULL);
	subs = malloc(sizeof(char) * len);
	i = 0;
	while (s[start] && i < l)
	{
		subs[i] = s[start];
		start++;
		i++;
	}
	subs[len] = '\0';
	return (subs);
}

/*int	main(int ac, char **av)
{
	if (ac > 4)
		return (1);
	char *s = ft_substr(av[1], (unsigned int)atoi(av[2]), (size_t)atoi(av[3]));
	printf ("%s\n", s);
	return (0);
}*/
