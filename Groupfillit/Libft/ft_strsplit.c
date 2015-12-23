/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 15:19:55 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/09 13:03:25 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cwords(char const *s, char c)
{
	size_t		i;
	size_t		i2;

	i = 0;
	i2 = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			i2++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (i2);
}

static char		*ft_nword(size_t i, char const *s, char c)
{
	size_t		l;
	size_t		i2;
	char		*str;

	l = i;
	i2 = 0;
	while (s[l] && s[l] != c)
		l++;
	str = ft_strnew(l - i + 1);
	if (str)
	{
		while (i < l)
		{
			str[i2] = s[i];
			i2++;
			i++;
		}
		return (str);
	}
	return (0);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**split;
	size_t		i;
	size_t		i2;

	i = 0;
	i2 = 0;
	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_cwords(s, c) + 1));
	while (i2 < ft_cwords(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			split[i2] = ft_nword(i, s, c);
			while (s[i] && s[i] != c)
				i++;
		}
		i2++;
	}
	split[i2] = NULL;
	return (split);
}
