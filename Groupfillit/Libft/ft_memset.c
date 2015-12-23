/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:04:38 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/01 12:11:31 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	if (b)
	{
		while (i < len)
		{
			((unsigned char *)b)[i] = (unsigned char)c;
			i++;
		}
	}
	return (b);
}
