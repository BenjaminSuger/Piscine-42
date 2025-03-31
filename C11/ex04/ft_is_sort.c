/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 11:41:03 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/30 12:22:53 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i + 1], tab[i]) < 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	compare(int a, int b)
{
	if (a < b)
		return (-1);
	return (0);
}

int	main(void)
{
	int *array = (int []) {1, 2, 3, 4, 5}; 
	int array2[] = {1,2,0,4,5};
	printf("%d\n", ft_is_sort(array, 5, &compare));
	printf("%d\n", ft_is_sort(array2, 5, &compare));

}
*/
