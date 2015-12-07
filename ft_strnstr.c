/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <dbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:25:25 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/04 17:44:04 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[0])
		{
			if (ft_strncmp(s1 + i, s2, ft_strlen(s2)) == 0 \
				&& i + ft_strlen(s2) <= n)
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
