/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:14:54 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:14:59 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *test0 = "chats";
	char *test1 = "chat7s";
	char *test2 = "";
	printf("attendu 1, resultat %d\n", ft_str_is_alpha(test0));
	printf("attendu 0, resultat %d\n", ft_str_is_alpha(test1));
	printf("attendu 1, resultat %d\n", ft_str_is_alpha(test2));

}
*/
