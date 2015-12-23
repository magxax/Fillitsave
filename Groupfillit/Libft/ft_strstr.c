/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:21:46 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/01 13:02:28 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		i2;
	int		i3;

	i = 0;
	if (little[0] == '\0')
		return (char *)(big);
	while (big[i])
	{
		i2 = i;
		i3 = 0;
		while (big[i2] == little[i3])
		{
			i2++;
			i3++;
			if (little[i3] == '\0')
				return (char *)(&big[i]);
		}
		i++;
	}
	return (NULL);
}
