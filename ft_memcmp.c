/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:18:45 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/04 17:42:21 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (n == 0)
		return (0);
	while (n && *(unsigned char *)s1 == *(unsigned char *)s2)
	{
		s1++;
		s2++;
		n--;
		if (n == 0)
			return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
