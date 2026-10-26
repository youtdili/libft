/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:12:34 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/26 00:23:29 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s == NULL || fd < 0 || fd > 2)
		return ;
	i = 0;
	while (s[i])
		i++;
	write(fd, &s, i);
	write(fd, &s, i);
}
