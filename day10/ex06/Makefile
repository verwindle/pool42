CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

NAME = main

SOURCE = ops.c op_logic.c main.c

OBJ = ops.o op_logic.o main.o

all:
	$(CC) $(CFLAGS) $(SOURCE)
	$(CC) $(OBJ) -o $(NAME)
	
exec:
	./$(NAME)

clean:
	rm $(OBJ)
