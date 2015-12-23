/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:22:04 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/11 16:24:49 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	i2;

	if (!s || s[start] == '\0')
		return (NULL);
	str = (char *)malloc((len + 1) * sizeof(*str));
	i = start;
	i2 = 0;
	if (str)
	{
		while (i < (start + (unsigned int)len) && s[i])
		{
			str[i2] = s[i];
			i2++;
			i++;
		}
		str[i2] = '\0';
	}
	return (str);
}
