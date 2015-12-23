/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:18:55 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/01 12:18:57 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*str;
	size_t	l;

	if (!(str = ft_memchr(dst, '\0', size)))
		return (size + ft_strlen(src));
	l = (size_t)(str - dst) + ft_strlen(src);
	while ((size_t)(str - dst) < size - 1 && *src)
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	return (l);
}
