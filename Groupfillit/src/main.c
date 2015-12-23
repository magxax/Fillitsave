/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 15:55:58 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/23 17:37:27 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*char	*ft_change_h(char **cut, char c)
{
	int		i;
	char	str;

	i = 0;
	while (cut[i])
	{
		if (cut[i] == '#')
			cut[i] = c;
		i++;
	}
	return (cut);
}*/

t_tetri	*ft_take_all(int nb, char *str)
{
	t_tetri	*tmp;
	t_tetri	*buf;
	int		i;

	i = 0;
	tmp = NULL;
	tmp = create_list(nb, str, tmp);
	tmp = take_tetri(tmp);
	buf = tmp;
	while (tmp)
	{
		tmp->c = 'A' + i;
//		tmp->cut_tetri = ft_change_h(tmp->cut_tetri, tmp->c);
		tmp = tmp->next;
		i++;
	}
	free(tmp);
	free(str);
	return (buf);
}

int		main(int ac, char **av)
{
	int		nbw;
	char	*str;
	t_tetri	*tab;
	t_map	*map;
	int		i;

	i = 0;
	tab = NULL;
	if (ac == 2)
	{
		str = ft_read(av[1]);
		nbw = ft_ctetri(str);
		tab = ft_take_all(nbw, str);
		map = create_map(nbw);
		resolv(tab, map, 0);
		/*while (tab)//
		{//
			ft_putendl(tab->tetri);//
			ft_putendl(tab->cut_tetri);//
			tab = tab->next;//
		}*/
		while (map->map[i])//
		{//
			ft_putendl(map->map[i]);//
			i++;//
		}//
	}
	else
	{
		ft_putendl("error");
		exit(42);
	}
	return (0);
}
