# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmidori <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 16:13:08 by lmidori           #+#    #+#              #
#    Updated: 2020/02/19 16:13:09 by lmidori          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SOURCE = srcs/*.c

HEADER = includes

FLAGS = -Wall -Wextra -Werror

all:$(NAME)
$(NAME):
	@gcc -I $(HEADER) -o $(NAME) $(SOURCE) $(FLAGS)

clean:
	@/bin/rm -f *.o

fclean:
	@/bin/rm -f $(NAME)
re: fclean all