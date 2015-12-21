# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 14:54:00 by tbenoist          #+#    #+#              #
#    Updated: 2015/12/21 10:23:48 by tbenoist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC =

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(SRC)
	@gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

clean:

fclean: clean
	@rm -f $(NAME)

re: fclean all
