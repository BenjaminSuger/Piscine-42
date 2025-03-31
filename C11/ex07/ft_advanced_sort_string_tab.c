/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:46:42 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/31 15:18:28 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//int ft_strcmp(char *str1, char *str2);

void	ft_advanced_sort_string_tab(char **tab, int (*cmp) (char *, char *))
{
	int		i;
	char	*temp;

	i = 1;
	while (tab[i])
	{
		if (cmp(tab[i], tab[i - 1]) < 0)
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

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while(str1[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

int	main(void)
{
	char *array[] = {"string", "def", "ab", NULL};
	ft_advanced_sort_string_tab(array, &ft_strcmp);
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[2]);
}
*/
