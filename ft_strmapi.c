/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:30:51 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/26 00:08:24 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char c))
{
	unsigned int	i;
	char			*new;

	i = 0;
	while (s[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i + 1] = '\0';
	return (new);
}
