/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 11:18:14 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/30 11:37:20 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		count += f(tab[i]);
		i++;
	}
	return (count);
}
/*
#include <stdio.h>

int	is_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			return (1);
		i++;
	}
	return (0);
}


int main(void)
{
	char *array[] = {"chAts", "serpent", "dragOn"};
	printf("%d\n", ft_count_if(array, 3, &is_upper));
}
*/
