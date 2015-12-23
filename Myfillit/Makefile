# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 14:54:00 by tbenoist          #+#    #+#              #
#    Updated: 2015/12/21 15:20:24 by tbenoist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = fillit.c

all: $(NAME)

$(NAME) : $(SRC)
	@gcc -Wall -Wextra -Werror $(SRC) -L. -lft -o $(NAME) 

clean:

fclean: clean
	@rm -f $(NAME)

re: fclean all
