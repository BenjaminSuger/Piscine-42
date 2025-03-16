/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:13:28 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:13:35 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i +1]);
			i = 0;
		}
		else
			i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {4,3,7,5,2,1};

	ft_sort_int_tab(tab, 6);
	printf("premier element %d\n", tab[0]);
	printf("second element %d\n", tab[1]);
	printf("troisieme element %d\n", tab[2]);
	printf("quatrieme element %d\n", tab[3]);
	printf("cinquieme element %d\n", tab[4]);
	printf("cinquieme element %d\n", tab[5]);
}
*/
