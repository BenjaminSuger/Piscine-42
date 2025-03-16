/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:13:03 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:13:08 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[size - 1]);
		size--;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3 , 4, 5};
	ft_rev_int_tab(tab, 5);
	printf("premier élement %d\n", tab[0]);
	printf("second élement %d\n", tab[1]);
	printf("troisieme élement %d\n", tab[2]);
	printf("quatrieme élement %d\n", tab[3]);
	printf("cinquième élement %d\n", tab[4]);
}
*/
