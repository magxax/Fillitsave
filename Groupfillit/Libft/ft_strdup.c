/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:15:19 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/01 13:08:09 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (str)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
