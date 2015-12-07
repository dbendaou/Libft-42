/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <dbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:22:57 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/04 17:36:45 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_is_neg(int nb)
{
	if (nb >= 0)
		return (1);
	else
		return (2);
}

char				*ft_itoa(int n)
{
	char			*my_nb;
	int				sign;
	int				index;

	sign = ft_is_neg(n);
	my_nb = (char *)malloc(sizeof(char) * ft_intlen(n) + sign);
	if ((my_nb = (char *)malloc(sizeof(char) * ft_intlen(n) + sign)) == NULL)
		return (NULL);
	my_nb[0] = '0';
	if (sign == 2)
		my_nb[0] = '-';
	index = ft_intlen(n) + sign - 1;
	my_nb[index] = '\0';
	index--;
	while (n)
	{
		my_nb[index] = ft_abs(n % 10) + '0';
		n = n / 10;
		index--;
	}
	return (my_nb);
}
