/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:20:04 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/01 13:37:34 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	size_t	j;

	i = 0;
	j = ft_strlen((char *)s2);
	if (!*s2)
		return ((char *)s1);
	while (s1[i])
	{
		if (s1[i] == s2[0])
		{
			if (ft_strncmp(s1 + i, s2, j) == 0)
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
