# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 09:26:25 by bsuger            #+#    #+#              #
#    Updated: 2025/03/31 13:10:10 by bsuger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc

FLAGS=-Wall -Werror -Wextra

includes=-Iincludes

SRCS=calculators.c ft_putnbr.c ft_atoi.c main.c

OBJ=${SRCS:.c=.o}

do-op: $(OBJ)
	$(CC) $(OBJ)  -o do-op
.c.o:
	${CC} $(includes) ${FLAGS} -c $< -o ${<:.c=.o} 

clean:
	rm *.o
	rm do-op
