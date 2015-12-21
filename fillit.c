/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 09:52:51 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/21 14:29:41 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#define BUFF_SIZE 21

int		check(char *buf)
{
	int		i;
	int		row;
	int		col;

	i = 0;
	row = 0;
	col = 0;
	while ((buf[i] == '.' || buf[i] == '\n' || buf[i] == '#') && i < 20)
	{
		if (buf[i] == '.' || bif[i] == '#');
			col++;
		if (buf[i] == '\n' && buf[i - 1] != '\n')
		{
			row++;
			if (col != 4)
				return (0);
			col = 0;
		}
		i++;
	}
	if (row != 4 || i != 20)
		return (0);
	return (1);
}

char	*map_create(int size)
{
	char	*map;
	int		i;
	
	if(!(map = (char*)malloc(sizeof(char) * ((size + 1) * (size) + 1))))
		return (NULL);
	i = 0;
	while (i < ((size + 1) * (size) + 1))
	{
		map[i] = '.';
		if (i == (size * (i / size)))
			map[i] = '\n';
		i++;
	}
	map[i] = '\0';
	return (map);
}

int		resolv(char *map, t_piece	*list, int pos)
{
	int		i;

	i = 0;
	while(i + ft_strlen(*list->shape) < ft_strlen(map))
	{
		if (map[i] == '.' && place_piece(map, *list))
		{
			i += ft_strlen(*list->shape)
		}
		else
			i++;
	}
}

int		place_piece(char **map,t_piece *list)
{
	int		i;

	i = 0;
	while (list->shape[i])
	{
		if (list->shape[i] != '.')
		{
			if(map[i] != '.')
				return (0);
			map[i] = list->letter;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUFF_SIZE];

	if (argc == 2)
	{
		fd = open(argv[1], O_CREAT, O_RDONLY);
		while(read(fd, buf, BUFF_SIZE))
		{
			check(buf);
		}
	}
	return (0);
}
