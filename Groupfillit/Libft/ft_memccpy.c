/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:38:06 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/06 15:18:13 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == (unsigned char)c)
			return (&(dst[i + 1]));
		i++;
	}
	return (NULL);
}
