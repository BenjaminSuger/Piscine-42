/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:12:01 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:12:06 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	
	a = 42;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("la valeur de a %d\n", a);
	printf("la valeur de b %d\n", b);
}
*/
