CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

NAME = ft_advanced_do-op

SOURCE = ops.c op_logic.c main.c

OBJ = ops.o op_logic.o main.o

all:
	$(CC) $(CFLAGS) $(SOURCE)
	$(CC) $(OBJ) -o $(NAME)
	
clean:
	/bin/rm -f $(OBJ) $(NAME)
