/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:42:16 by dbendaou          #+#    #+#             */
/*   Updated: 2015/11/29 19:47:28 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	char *tmp;

	str = (char *)malloc(sizeof(char) * size + 1);
	tmp = str;
	if (str)
	{
		while (*tmp)
		{
			tmp = NULL;
			tmp++;
		}
		return (str);
	}
	else
		return (0);
}
