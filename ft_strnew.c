/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <dbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:42:16 by dbendaou          #+#    #+#             */
/*   Updated: 2016/01/13 16:35:46 by dbendaou         ###   ########.fr       */
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
			*tmp = '\0';
			tmp++;
		}
		return (str);
	}
	else
		return (0);
}
