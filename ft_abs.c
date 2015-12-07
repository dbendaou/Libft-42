/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:21:27 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/04 17:23:15 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_abs(int nb)
{
	long int	nb_abs;

	if (nb < 0)
	{
		nb_abs = nb * -1;
		return (nb_abs);
	}
	else
	{
		nb_abs = nb;
		return (nb_abs);
	}
	if (nb == 0)
		return (0);
}
