/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:16:25 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:16:27 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric( char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *test0 = "12345657";
	char *test1 = "113r2";
	char *test2 = "";
	printf("attendu 1, result %d\n", ft_str_is_numeric(test0));
	printf("attendu 0, result %d\n", ft_str_is_numeric(test1));
	printf("attendu 1, result %d\n", ft_str_is_numeric(test2));
}
*/
