/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 22:37:43 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/25 23:49:57 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	cnt(char const *s, char c, int x, int i)
{
	while (s[i] != c && s[i])
		i++;
	while (s[i] == c && s[i])
		i++;
	if (s[i] != '\0')
		x += (cnt(s, c, x, i));
	return (x);
}

static char	**asmbl(char **strs, char const *s, char c, int i)
{
	static int	ltr;
	int			l;

	if (!ltr)
		ltr = 0;
	l = 0;
	while (s[ltr] == c)
		ltr++;
	while (s[ltr] && s[ltr] != c)
	{
		strs[i][l] = s[ltr];
		l++;
		ltr++;
	}
	strs[i][l] = '\0';
	return (strs);
}

static int	fakestrlen(char c, char const *s)
{
	static int	j;
	int			p;

	p = 0;
	if (!j)
		j = 0;
	while (s[j] == c && s[j])
		j++;
	while (s[j] != c && s[j])
	{
		j++;
		p++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		x;

	if (s == NULL)
		return (NULL);
	i = 0;
	x = 1;
	x = cnt(s, c, x, i);
	strs = malloc(sizeof(char *) * (x + 1));
	while (i < x)
	{
		strs[i] = malloc(sizeof(char) * fakestrlen(c, s));
		asmbl(strs, s, c, i);
		i++;
	}
	strs[x + 1] = NULL;
	return (strs);
}

/*int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	char	**ss = ft_split(av[1] , av[2][0]);
	int	u = 0;
	while (ss[u])
	{
		printf ("%s\n", ss[u]);
		u++;
	}
	return (0);
}*/
