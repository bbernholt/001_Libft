CC=gcc 
CFLAGS+=-Wall -Wextra -Werror


NAME=libft.a
MAIN=main.c
HEADER=libft.h
OBJECTS=ft_isdigit.o
CFILES=ft_isdigit.c

all:$(NAME)

$(NAME): $(OBJECTS)
#	$(CC) $(HEADER) -o $@ $^
#	ar -crs libcipher.a cipher_encode.o cipher_decode.o
	ar -crs libft.a $^

$(OBJECTS): $(CFILES) 
	$(CC) $(CLFAGS) -c -o $@ $^

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJECTS)

re: fclean all
