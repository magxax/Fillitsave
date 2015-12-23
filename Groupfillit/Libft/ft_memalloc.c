/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:08:52 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/01 13:05:07 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;

	m = (void *)malloc(size * sizeof(void));
	if (m)
	{
		ft_bzero(m, size);
		return (m);
	}
	return (NULL);
}
