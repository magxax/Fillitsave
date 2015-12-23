SRC_NAME =	ft_isprint.c \
			ft_lstnew.c \
			ft_memmove.c \
			ft_putnbr_fd.c \
			ft_strcpy.c \
			ft_strlcat.c \
			ft_strnequ.c \
			ft_strtrim.c \
			ft_atoi.c \
			ft_itoa.c \
			ft_memalloc.c \
			ft_memset.c \
			ft_putstr.c \
			ft_strdel.c \
			ft_strlen.c \
			ft_strnew.c \
			ft_tolower.c \
			ft_bzero.c \
			ft_lstadd.c \
			ft_memccpy.c \
			ft_putchar.c \
			ft_putstr_fd.c \
			ft_strdup.c \
			ft_strmap.c \
			ft_strnstr.c \
			ft_toupper.c \
			ft_isalnum.c \
			ft_lstdel.c \
			ft_memchr.c \
			ft_putchar_fd.c \
			ft_strcat.c \
			ft_strequ.c \
			ft_strmapi.c \
			ft_strrchr.c \
			ft_isalpha.c \
			ft_lstdelone.c \
			ft_memcmp.c \
			ft_putendl.c \
			ft_strchr.c \
			ft_striter.c \
			ft_strncat.c \
			ft_strsplit.c \
			ft_isascii.c \
			ft_lstiter.c \
			ft_memcpy.c \
			ft_putendl_fd.c \
			ft_strclr.c \
			ft_striteri.c \
			ft_strncmp.c \
			ft_strstr.c \
			ft_isdigit.c \
			ft_lstmap.c \
			ft_memdel.c \
			ft_putnbr.c \
			ft_strcmp.c \
			ft_strjoin.c \
			ft_strncpy.c \
			ft_strsub.c \
			ft_abs.c \
			ft_is_prime.c \
			ft_recursive_power.c \
			ft_str_is_lowercase.c \
			ft_swap.c

OBJ_NAME = $(SRC_NAME:.c=.o)

NAME = libft.a

SRC_PATH = ./

OBJ_PATH = ./obj/

LIB_PATH = ./

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

LIB = $(addprefix -I, $(LIB_PATH))

FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):	$(OBJ)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)

$(OBJ_PATH)%.o:	$(SRC_PATH)%.c
				@mkdir -p $(OBJ_PATH)
				@gcc $(FLAGS) $(LIB) -o $@ -c $<

clean:
	@rm -rfv $(OBJ) $(OBJ_PATH)

fclean: clean
	@rm -fv $(NAME)

re: fclean all

.PHONY : all clean fclean re
