/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:04:39 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/30 18:28:54 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{

	char	op;
	int	i;
	char	*operators;
	int	(*p[5])(int, int);

	i = 0;
	op = argv[2][0];
	operators = "+-*/%";
	p[0] = &add;
	p[1] = &minus;
	p[2] = &mul;
	p[3] = &div;
	p[4] = &mod;
	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) != 1)
		return (0);
	while (operators[i])
	{
		if (operators[i] == op)
		{
			ft_putnbr( p[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
			write(1, "\n", 1);
		}
		i++;
	}
}
