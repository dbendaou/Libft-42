/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <dbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:24:52 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/06 23:51:16 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((str = (char *)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2) + 1))))
	{
		while (s1[i])
		{
			str[i] = (char)s1[i];
			i++;
		}
		while (s2[j])
		{
			str[i + j] = (char)s2[j];
			j++;
		}
		str[i + j] = '\0';
		return (str);
	}
	return (NULL);
}
