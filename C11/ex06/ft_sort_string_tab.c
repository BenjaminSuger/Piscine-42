/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:08:44 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/31 14:35:33 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*temp;

	i = 1;
	while (tab[i])
	{
		if (ft_strcmp(tab[i], tab[i - 1]) < 0)
		{
			temp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = temp;
			i = 0;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char *array[] = {"strings", "def", "abc", NULL};
	ft_sort_string_tab(array);
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[2]);
}
*/
