/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:10:20 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/25 22:11:16 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)

{
	int	i;
	int	j;
	int	x;

	if (str == NULL)
		return (0);
	i = 0;
	j = 1;
	x = 0;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = -j;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = x * 10 + str[i] - 48;
		i++;
	}
	return (x);
}
