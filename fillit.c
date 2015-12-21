/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 09:52:51 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/21 11:03:56 by tbenoist         ###   ########.fr       */
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
