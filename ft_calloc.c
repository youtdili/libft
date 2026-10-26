/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:11:38 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/25 22:13:23 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*s;

	if (size * n < INT_MAX)
		return (0);
	if (size > SIZE_MAX)
		return (0);
	s = malloc(size * n);
	return (s);
}
