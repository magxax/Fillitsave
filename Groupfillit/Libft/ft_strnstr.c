/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:21:14 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/06 15:36:15 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *litt, size_t len)
{
	size_t	i;
	size_t	i2;
	size_t	i3;

	i = 0;
	if (litt[0] == '\0')
		return (char *)(big);
	while (big[i] && i < len)
	{
		i2 = i;
		i3 = 0;
		while (big[i2] == litt[i3] && i2 < len && i3 < len)
		{
			i2++;
			i3++;
			if (litt[i3] == '\0')
				return (char *)(&big[i]);
		}
		i++;
	}
	return (NULL);
}
