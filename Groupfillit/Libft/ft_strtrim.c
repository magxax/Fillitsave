/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:22:17 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/06 15:23:34 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_fspace(char const *s)
{
	int		i;

	i = ft_strlen(s);
	if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t')
		return (1);
	return (0);
}

static int	ft_bspace(char const *s)
{
	if (s[0] == ' ' || s[0] == '\n' || s[0] == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		i2;
	int		i3;
	char	*trim;

	if (!s)
		return (NULL);
	i = 0;
	i2 = ft_strlen(s);
	i3 = 0;
	trim = (char *)malloc((i2 + 1) * sizeof(char));
	while (i <= i2 - 1 && trim && s[i])
	{
		if (ft_bspace(s) && i == 0)
			i++;
		if (ft_fspace(s) == 1 && i == i2 - 1)
			i++;
		trim[i3] = s[i];
		i++;
		i3++;
	}
	trim[i3] = '\0';
	if (ft_fspace(trim) || ft_bspace(trim))
		return (ft_strtrim(trim));
	return (trim);
}
