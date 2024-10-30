NAME =	libft.a

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlen.c  ft_memset.c  ft_bzero.c \
	ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_strnstr.c ft_atoi.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strtrim.c \
	ft_putchar_fd.c  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

OBJS = $(SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: $(NAME)
	$(CC) $(FLAGS) test.c -L. -lft -o test_libft
	./test_libft

.PHONY: all clean fclean re
