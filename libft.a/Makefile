# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcarrara <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/18 15:59:22 by mcarrara          #+#    #+#              #
#    Updated: 2025/10/20 11:22:38 by mcarrara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES = *.c
OBJ = *.o

ALL : $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(FILES)

#ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean ALL
