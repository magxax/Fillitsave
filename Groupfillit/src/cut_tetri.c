/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 20:36:33 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/23 17:35:18 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**delete_emptybl(char **tab)
{
	char	*str;
	int		y;

	y = 0;
	str = ft_strnew(ft_strlen(tab[y]));
	str = ft_memset(str, '.', ft_strlen(tab[y]));
	while (tab[y])
		y++;
	y--;
	if (ft_strequ(tab[y], str))
	{
		tab[y] = NULL;
	}
	if (ft_strequ(tab[y - 1], str))
	{
		delete_emptybl(tab);
	}
	free(str);
	return (tab);
}

char	**delete_emptytl(char **tab)
{
	int		y;
	char	*str;

	y = 0;
	str = ft_strnew(ft_strlen(tab[y]));
	str = ft_memset(str, '.', ft_strlen(tab[y]));
	if (ft_strequ(tab[y], str))
	{
		while (y < 4)
		{
			tab[y] = tab[y + 1];
			y++;
		}
	}
	if (ft_strequ(tab[0], str))
	{
		delete_emptytl(tab);
	}
	free(str);
	return (tab);
}

char	*cut_str_line(char *str)
{
	char	**tab;
	char	*str2;
	int		y;
	char	*tmp;

	y = 0;
	str2 = NULL;
	tab = ft_strsplit(str, '\n');
	tab = delete_emptytl(tab);
	tab = delete_emptybl(tab);
	while (tab[y])
	{
		tmp = ft_strjoin(tab[y], "\n");
		str2 = ft_strjoin(str2, tmp);
		y++;
	}
	free(tab);
	free(tmp);
	return (str2);
}

char	*cut_str(char *str)
{
	char	**tab;
	char	*str2;
	char	*tmp;
	int		y;

	y = 0;
	str2 = NULL;
	tab = ft_strsplit(str, '\n');
	tab = del_empty(tab);
	tab = del_become(tab);
	while (tab[y])
	{
		tmp = ft_strjoin(tab[y], "\n");
		str2 = ft_strjoin(str2, tmp);
		y++;
	}
	free(tab);
	free(tmp);
	return (str2);
}

t_tetri	*take_tetri(t_tetri *list)
{
	t_tetri	*tmp;
	char	*str;

	tmp = list;
	while (tmp)
	{
		str = cut_str_line(cut_str(tmp->tetri));
		tmp->cut_tetri = ft_strsplit(str, '\n');
		tmp = tmp->next;
	}
	free(tmp);
	return (list);
}
