/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <dbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 20:30:02 by dbendaou          #+#    #+#             */
/*   Updated: 2016/01/13 16:29:48 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	s = s + start;
	if (str == NULL)
		return (NULL);
	while (*s && i < len)
	{
		*(str + i) = *s;
		s++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
