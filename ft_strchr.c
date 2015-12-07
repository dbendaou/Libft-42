/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <dbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 20:09:40 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/01 13:32:55 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	char *tmp;

	tmp = (char *)str;
	while (*tmp)
	{
		if (*tmp == c)
			return (tmp);
		tmp++;
	}
	return ((c == 0) ? tmp : NULL);
}
