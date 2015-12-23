SRC_NAME =	cut_tetri.c \
			main.c \
			read.c \
			utils.c\
			resolv.c

OBJ_NAME = $(SRC_NAME:.c=.o)

LIB_NAME = libft.a

NAME = fillit

SRC_PATH = ./src/

OBJ_PATH = ./obj/

HEADER_PATH = ./includes/

LIB_PATH = ./Libft/

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

HEADER = $(addprefix -I, $(HEADER_PATH))

LIB = $(addprefix $(LIB_PATH), $(LIB_NAME))

FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):	$(OBJ)
			@cd $(LIB_PATH) && make
			@gcc $(FLAGS) $(LIB) $(OBJ) -o $(NAME)

$(OBJ_PATH)%.o:	$(SRC_PATH)%.c
				@mkdir -p $(OBJ_PATH)
				@gcc $(FLAGS) $(HEADER) -o $@ -c $<

clean:
	@rm -rfv $(OBJ) $(OBJ_PATH)
	@cd $(LIB_PATH) && make clean

fclean: clean
	@rm -fv $(NAME)
	@cd $(LIB_PATH) && make fclean

re: fclean all

.PHONY : all clean fclean re
