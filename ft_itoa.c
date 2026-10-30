/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:26:52 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/30 02:52:48 by younessso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		j;

	i = 0;
	j = n;
	while (j > 9)
	{
		j = j / 10;
		i++;
	}
	i += 1;
	num = malloc(sizeof(char) * i);
	j = i - 1;
	while (n > 9)
	{
		num[j] = 48 + (n % 10);
		n = n / 10;
		j--;
	}
	num[0] = n + 48;
	num[i] = '\0';
	return (num);
}

/*int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	printf (ft_itoa(atoi(av[1])));
	return (0);
}*/
