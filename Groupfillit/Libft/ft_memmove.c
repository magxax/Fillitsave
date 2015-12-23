/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:12:13 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/01 13:06:20 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*t;
	size_t	i;

	t = (void *)malloc(sizeof(void) * (len));
	i = 0;
	if (t && src)
	{
		ft_memcpy(t, src, len);
	}
	ft_memcpy(dst, t, len);
	free(t);
	return (dst);
}
