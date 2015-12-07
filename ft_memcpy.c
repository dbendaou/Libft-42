/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <dbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:56:53 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/01 17:30:25 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)dest;
	while (n)
	{
		*tmp = *((unsigned char *)src);
		tmp++;
		src++;
		n--;
	}
	return (dest);
}
