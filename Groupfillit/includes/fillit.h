/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazouz <mmazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 16:30:14 by mmazouz           #+#    #+#             */
/*   Updated: 2015/12/23 17:35:32 by mmazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../Libft/libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

# define BUF_SIZE 21

typedef struct		s_map
{
	char			**map;
	int				size;
}					t_map;

typedef struct		s_tetri
{

	char			*tetri;
	char			**cut_tetri;
	char			c;
	struct s_tetri	*next;
	struct s_tetri	*prev;
}					t_tetri;

t_tetri				*take_tetri(t_tetri *list);

char				**del_empty(char **tab);

char				**del_become(char **tab);

char				*ft_read(char *str);

int					ft_ctetri(char *str);

t_tetri				*create_list(int nb, char *str, t_tetri *new);

t_map				*create_map(int size);

int					ft_nbchar(char	*str);

int					put_tetri(t_tetri *list, t_map *map, int pos);

int					resolv(t_tetri *list, t_map *map, int pos);
#endif
