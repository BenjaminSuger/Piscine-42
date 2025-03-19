/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:17:14 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:17:16 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *test0 = "aaa aaa";
	char *test1 = "aaa\va";
	char *test2 = "";
	printf("attendu 1, result %d\n",ft_str_is_printable(test0));
	printf("attendu 0, result %d\n",ft_str_is_printable(test1));
	printf("attendu 1, result %d\n",ft_str_is_printable(test2));
}
*/
