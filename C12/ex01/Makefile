# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/03 13:45:43 by bsuger            #+#    #+#              #
#    Updated: 2025/04/03 16:14:47 by bsuger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc

CFLAGS=-Wall -Werror -Wextra -g

includes=ft_list.h

SRCS=./ft_list_push_front.c ./ft_create_elem.c

OBJ=${SRCS:.c=.o}

program: $(OBJ)
	$(CC) $(OBJ) -o program

.c.o: $(SRCS)
	$(CC) $(CFLAG) -c $< -o ${<:.c=.o}

fclean:
	rm *.o
	rm program
