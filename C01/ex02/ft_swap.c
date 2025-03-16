/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:11:22 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:11:25 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 84;
	printf("la valeur de a avant %d\n", a);
	printf("la valeur de b avant %d\n", b);
	ft_swap(&a, &b);
	printf("la valeur de a après %d\n", a);
	printf("la valeur de b après %d\n", b);
}
*/
