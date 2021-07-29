NAME = := bsq
CFLAGS = ?= -Wall -Wextra -Werror
SRC = ft_atoi.c \
	ft_strncpy.c \
	readboard.c \
	ft_strncpy.c \
	calcbsq.c

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -o $(NAME) $(SRC)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
