/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:32:36 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/26 00:07:41 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	douane(char const *trv, char const c)
{
	int	j;

	j = 0;
	while (trv[j])
	{
		if (trv[j] == c || c == '\0')
			return (1);
		j++;
	}
	return (0);
}

static char	*create(char const *s1, int x, int i)
{
	char	*cpy;
	int		y;

	y = 0;
	cpy = malloc(sizeof(char) * (i - x + 1));
	while (x <= i)
	{
		cpy[y] = s1[x];
		x++;
		y++;
	}
	cpy[y] = '\0';
	return (cpy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	x;

	if (*s1 == '\0' || *set == '\0')
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i])
		i++;
	while (douane(set, s1[x]) != 0)
		x++;
	while (douane(set, s1[i]) != 0)
		i--;
	return (create(s1, x, i));
}
/*
void	putstr(char *str)
{
	while (*str)
	{
		write (1, &*str, 1);
		str++;
	}
}

int	main(int ac, char const **av)
{
	if (ac > 3)
		return (1);
	putstr(ft_strtrim(av[1], av[2]));
	return (0);
}*/
