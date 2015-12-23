/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 13:27:31 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/23 18:41:34 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*int		ft_nbchar(char	*str)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (*str != '\n')
			i++;
		str++;
	}
	return (i);
}*/

int		put_tetri(t_tetri *list, t_map *map, int pos)
{
	int		x;
	int		y;
	int		o;
	int		a;
	
	y = pos / map->size;
	o = 0;
	while (list->cut_tetri[o] && map->map[y + o])
	{
		x = pos % map->size;
		a = 0;
		while (list->cut_tetri[o][a] && map->map[y + o][x + a])
		{
			if (map->map[y + o][x + a] == '.' && list->cut_tetri[o][a] != '.')
			{
				map->map[y + o][x + a] = list->c;
				a++;
			}
			else if (map->map[y + o][x + a] != '.' && list->cut_tetri[o][a] == '.')
				a++;
			else
				return (0);
		}
		o++;
	}
	return (1);
}

int	resolv(t_tetri *list, t_map *map, int pos)
{
	t_map	*tmp;
	int		size;
	int		ret;

	if (list == NULL)
		return (1);
	ret = 0;
	tmp = create_map(map->size);
	size = map->size * map->size;
	while (pos < size && ret == 0)
	{
		tmp->map = map->map;
		if(put_tetri(list, tmp, pos))
			ret = resolv(list->next, tmp, 0);
		else if (list->prev == NULL)
		{
			map = create_map(map->size + 1);
			pos = 0;
		}
		else
			pos++;
	}
	return ret ? 1 : 0;
}
