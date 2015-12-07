/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:18:44 by dbendaou          #+#    #+#             */
/*   Updated: 2015/11/27 17:23:02 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*tmp;

	tmp = s1;
	while (*tmp != '\0')
		tmp++;
	while (*s2 != '\0' && n > 0)
	{
		*tmp = *s2;
		tmp++;
		s2++;
		n--;
	}
	*tmp = '\0';
	return (s1);
}
