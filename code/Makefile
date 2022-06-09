CC=gcc 
CFLAGS=-Wall -Wextra -Werror


NAME=libft.a
#MAIN=main.c
#HEADER=libft.h
OBJECTS=ft_strmapi.o ft_strlen.o
CFILES=ft_strmapi.c ft_strlen.c

all:$(NAME)

$(NAME): $(OBJECTS)
#	$(CC) $(HEADER) -o $@ $^
#	ar -crs libcipher.a cipher_encode.o cipher_decode.o
	ar -crs $(NAME) $^

$(OBJECTS): $(CFILES) 
	$(CC) $(CLFAGS) -c $^

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJECTS)

re: fclean all
