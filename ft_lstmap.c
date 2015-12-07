/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:40:20 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/03 14:50:08 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map_list;
	t_list	*lst_run;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	if (!(map_list = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	lst_run = map_list;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		if (!(lst_run->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		lst = lst->next;
		lst_run = lst_run->next;
	}
	return (map_list);
}
