NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_memset.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_strchr.c ft_strlen.c ft_toupper.c ft_strdup.c ft_memcpy.c ft_memmove.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONE: all clean fclean re