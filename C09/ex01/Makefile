# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/28 09:08:12 by bsuger            #+#    #+#              #
#    Updated: 2025/03/28 18:22:37 by bsuger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror -Iincludes -c

all: libft.a

compile: srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
	$(CC) $(FLAGS) srcs/ft_putchar.c -o srcs/ft_putchar.o
	$(CC) $(FLAGS) srcs/ft_swap.c -o srcs/ft_swap.o
	$(CC) $(FLAGS) srcs/ft_putstr.c -o srcs/ft_putstr.o
	$(CC) $(FLAGS) srcs/ft_strlen.c -o srcs/ft_strlen.o
	$(CC) $(FLAGS) srcs/ft_strcmp.c -o srcs/ft_strcmp.o

libft.a: srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
	ar -rcs libft.a srcs/*.o
	ranlib libft.a

clean:
	rm srcs/*.o
fclean:
	rm srcs/*.o
	rm libft.a
re:
	make fclean
	make all
