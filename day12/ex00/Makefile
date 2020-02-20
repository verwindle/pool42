CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

NAME = ft_display_file

SRC = file_display.c
OBJ = file_display.o

all: $(NAME)

$(OBJ):
	$(CC) $(CFLAGS) $(SRC)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all