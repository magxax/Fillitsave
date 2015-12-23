/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 15:09:14 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/06 15:10:02 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*blist;
	t_list	*clist;

	clist = (t_list *)malloc(sizeof(t_list));
	blist = clist;
	if (!lst || !f)
		return (NULL);
	if (lst)
	{
		clist = (*f)(lst);
		blist = clist;
		while (lst->next)
		{
			clist->next = (*f)(lst->next);
			clist = clist->next;
			lst = lst->next;
		}
	}
	return (blist);
}
