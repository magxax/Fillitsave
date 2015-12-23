/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:21:28 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/01 12:59:58 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		l;

	l = ft_strlen(s) + 1;
	while (l-- >= 0)
	{
		if (s[l] == (char)c)
			return ((char *)&s[l]);
	}
	return (NULL);
}
