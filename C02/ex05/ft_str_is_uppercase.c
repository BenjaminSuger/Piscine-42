/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:16:59 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:17:03 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *test0 = "AAAAAA";
	char *test1 = "AAbAA";
	char *test2 = "";
	printf("attendu 1, resultat %d\n",ft_str_is_uppercase(test0));
	printf("attendu 0, resultat %d\n",ft_str_is_uppercase(test1));
	printf("attendu 1, resultat %d\n",ft_str_is_uppercase(test2));
}
*/
