CC=gcc 
CFLAGS=-Wall -Wextra -Werror


NAME=libft
OBJECTS=ft_isadigit.o
CFILES=ft_isadigit.c

all:$(NAME)

$(NAME): $(OBJECTS)
	$(CC) -o $@ $^

$(OBJECTS): $(CFILES) 
	$(CC) $(CLFAGS) -c -o $@ $^

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJECTS)

re: fclean all
