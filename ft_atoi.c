/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:25:47 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/04 17:45:59 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *str)
{
	char		*tmp;
	int			sign;
	int			nb;

	tmp = (char *)str;
	sign = 1;
	nb = 0;
	while (*tmp == '\n' || *tmp == ' ' || *tmp == '\t' || *tmp == '\r'
		|| *tmp == '\v' || *tmp == '\f')
		tmp++;
	sign = (*tmp == '-') ? -1 : 1;
	tmp = (*tmp == '-' || *tmp == '+') ? tmp + 1 : tmp;
	while (*tmp >= '0' && *tmp <= '9')
	{
		nb = nb * 10 + (*tmp - '0');
		tmp++;
	}
	return (nb * sign);
}
