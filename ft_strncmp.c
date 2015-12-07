/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:27:41 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/04 17:07:04 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] && s1[i] && i < n)
	{
		i++;
	}
	return ((i == n) ? (unsigned char)s1[i - 1] - (unsigned char)s2[i - 1] \
			: (unsigned char)s1[i] - s2[i]);
}
