/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youtdili <youtdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 23:08:02 by youtdili          #+#    #+#             */
/*   Updated: 2026/10/25 23:39:23 by youtdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*scatntd;

	i = 0;
	j = 0;
	scatntd = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	while (s1[i])
	{
		scatntd[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		scatntd[i] = s2[j];
		i++;
		j++;
	}
	scatntd[i] = '\0';
	return (scatntd);
}

/*int	main(int ac, char **av)
{
	if (ac > 3)
		return (1);
	printf("%s\n", ft_strjoin(av[1], av[2]));
	return (0);
}*/
