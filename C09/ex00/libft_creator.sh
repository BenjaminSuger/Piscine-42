# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/28 07:33:15 by bsuger            #+#    #+#              #
#    Updated: 2025/03/28 09:03:51 by bsuger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

gcc -c ft_putchar.c -o ft_putchar.o
gcc -c ft_putstr.c -o ft_putstr.o
gcc -c ft_swap.c -o ft_swap.o
gcc -c ft_strcmp.c -o ft_strcmp.o
gcc -c ft_strlen.c -o ft_strlen.o

ar -cr libft.a *.o
ranlib libft.a
rm *.o

#pour compiler ;  gcc main.c -L. -lft -o exe 
