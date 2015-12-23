/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 22:06:17 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/23 12:50:13 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_ctetri(char *str)
{
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	while (str[i])
	{
		if (str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0'))
			i2++;
		i++;
	}
	if (i2 > 26)
	{
		ft_putstr("error\n");
		exit(42);
	}
	return (i2);
}

void	ft_valtetri(char *str)
{
	int		i;
	int		h;
	int		n;
	int		d;

	i = 0;
	h = 0;
	n = 0;
	d = 0;
	while (str[i])
	{
		if (str[i] == '#' && (str[i - 1] == '#' || str[i + 1] == '#' ||
								str[i - 5] == '#' || str[i + 5] == '#'))
			h++;
		else if (str[i] == '\n')
			n++;
		else if (str[i] == '.')
			d++;
		i++;
	}
	if (i != 20 || h != 4 || n != 4 || d != 12)
	{
		ft_putstr("error\n");
		exit(42);
	}
}

t_tetri	*add_tetri(char *str, t_tetri *previous)
{
	t_tetri	*tet;

	ft_valtetri(str);
	tet = (t_tetri *)malloc(sizeof(t_tetri));
	if (tet)
	{
		tet->tetri = ft_strdup(str);
		if (previous != NULL)
		{
			tet->prev = previous;
			tet->next = NULL;
		}
		else
		{
			tet->next = NULL;
			tet->prev = NULL;
		}
	}
	return (tet);
}

t_tetri	*create_list(int nb, char *str, t_tetri *new)
{
	t_tetri	*ret;
	char	*str2;
	size_t	i;
	int		i2;

	i = 0;
	i2 = 0;
	while (nb--)
	{
		str2 = ft_strsub(str, i, 20);
		i = i + ft_strlen(str2) + 1;
		if (new == NULL)
		{
			new = add_tetri(str2, NULL);
			ret = new;
		}
		else
		{
			ret->next = add_tetri(str2, ret);
			ret = ret->next;
		}
	}
	free(str);
	return (new);
}

char	*ft_read(char *av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*str;

	str = NULL;
	if ((fd = open(av, O_RDONLY)))
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			str = ft_strjoin(str, buf);
			ft_bzero(buf, BUF_SIZE + 1);
		}
	}
	if (close(fd) < 0)
	{
		ft_putstr("error\n");
		exit(42);
	}
	return (str);
}
