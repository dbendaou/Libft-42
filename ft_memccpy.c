/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <dbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:18:03 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/01 17:30:19 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (dest && src && n)
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
			if (*((char *)src + i) == (char)c)
				return (dest + i + 1);
			i++;
		}
	}
	return (NULL);
}
