NAME	= libft.a

GCC		= gcc -Wall -Werror -Wextra

SRC		= ft_atoi.c ft_isalnum.c ft_isdigit.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isprint.c ft_tolower.c ft_bzero.c ft_isascii.c ft_strlen.c ft_toupper.c ft_strdup.c ft_strjoin.c ft_memcpy.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_memmove.c ft_calloc.c ft_memset.c ft_strchr.c ft_memccpy.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_strrchr.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_split.c

OBJ = $(SRC:.c=.o)
INC = ./inc/

$(NAME): $(OBJ)		
				ar rc $(NAME) $(OBJ)		
				ranlib $(NAME)

%.o: %.c		
				$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:		
				$(RM) $(OBJ)

fclean: clean		
				$(RM) $(NAME)
re: fclean all

.PHONY: clean clean
