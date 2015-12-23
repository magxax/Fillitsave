/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 00:24:39 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/23 14:09:28 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**del_empty(char **tab)
{
	int		i;
	int		y;

	i = ft_strlen(tab[0]);
	while (tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i] &&
			tab[2][i] == tab[3][i] && i >= 0)
	{
		y = 0;
		if (tab[y][i] != '#')
		{
			while (y < 4)
			{
				tab[y][i] = '\0';
				y++;
			}
		}
		i--;
	}
	return (tab);
}

t_map	*create_map(int size)
{
	t_map	*map_new;
	int		tmp;

	tmp = size;
	map_new = (t_map *)malloc(sizeof(t_map));
	if (map_new)
	{
		map_new->map = (char **)malloc(sizeof(char *) * size + 1);
		map_new->map[size + 1] = NULL;
		map_new->size = tmp;
		while (size)
		{
			size--;
			map_new->map[size] = ft_strnew(tmp + 1);
			map_new->map[size] = ft_memset(map_new->map[size], '.', tmp);
		}
	}
	return (map_new);
}

char	**del_become(char **tab)
{
	int		len;
	int		i;
	int		y;

	i = 0;
	y = 0;
	len = ft_strlen(tab[0]);
	while (tab[0][i] == tab[1][i] && tab[1][i] == tab[2][i] &&
			tab[2][i] == tab[3][i] && i < len)
	{
		if (tab[0][i] != '#')
			len--;
		i++;
	}
	while (tab[y])
	{
		tab[y] = ft_strsub(tab[y], i, len);
		y++;
	}
	return (tab);
}
