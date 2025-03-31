/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:15:29 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/30 10:35:07 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	result = malloc(sizeof(int) * length);
	if (result == NULL)
		return (NULL);
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	add(int i)
{
	if (i % 2 == 0)
		return (i + 4);
	else
		return (i + 1);
}

int	main()
{
	int	i = 0;
	int	array[] = {2,3,4,6,7,8,9};
	int	*result = ft_map(array, 7, &add);
	while (i < 7)
	{
		printf("%d devient %d\n",array[i], result[i]);
		i++;
	}
	free(result);
}
*/
