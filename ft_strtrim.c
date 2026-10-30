/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younesssouw </var/spool/mail/younesss      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 04:20:31 by younessso         #+#    #+#             */
/*   Updated: 2026/10/30 04:21:34 by younessso        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	start = 0;
	if (s == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s);
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	while (end > start && ft_strchr(set, s[end - 1]))
		end--;
	if (start == end)
		return (NULL);
	res = ft_substr(s, start, end - start);
	return (res);
}
/*int	main(void)
{
	ft_putstr_fd(ft_strtrim("yxcqweyxcyxcycxycqwe", "qweasd"), 1);
	return (0);
}*/
