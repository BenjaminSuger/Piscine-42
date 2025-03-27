/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 07:20:26 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/27 15:30:14 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		length;
	char	*result;

	i = 0;
	length = ft_strlen(str);
	result = malloc(sizeof(char) * length + 1);
	while (i < length)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*result;

	i = 0;
	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == NULL)
		return (NULL);
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].str = 0;
	result[i].copy = 0;
	result[i].size = 0;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char *av[] = {"le ", "chat ", "est ", "MIGNON"};
	t_stock_str *test = ft_strs_to_tab(4, av);

	test[0].copy[0] = 'm';

	ft_show_tab(test);


	for (int i = 0; i < 4; i++)
	{
		free(test[i].copy);
	}
	free(test);
}
*/
