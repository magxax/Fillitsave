/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 15:10:17 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/11 13:56:44 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*l;

	if (!(l = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content) || !(content_size))
	{
		l->content = NULL;
		l->content_size = 0;
	}
	else
	{
		if (!(l->content = (void *)malloc(sizeof(content_size))))
			return (NULL);
		ft_memcpy(l->content, content, content_size);
		l->content_size = content_size;
	}
	l->next = NULL;
	return (l);
}
