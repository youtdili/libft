/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:11:38 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/29 04:08:32 by younessso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*new;

	if (!n || !size)
		return (NULL);
	if (size * n > INT_MAX)
		return (NULL);
	if (size > SIZE_MAX)
		return (NULL);
	new = malloc(size * n);
	ft_bzero((char *)(new), n);
	return (new);
}
