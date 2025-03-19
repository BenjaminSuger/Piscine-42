/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:16:41 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:16:43 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *test0 = "abcdefghijklmnopqrstuvwxyz";
	char *test1 = "aagfvbE";
	char *test2 = "";
	printf("attendu 1, resultat %d\n",ft_str_is_lowercase(test0));
	printf("attendu 0, resultat %d\n",ft_str_is_lowercase(test1));
	printf("attendu 1, resultat %d\n",ft_str_is_lowercase(test2));
}
*/
