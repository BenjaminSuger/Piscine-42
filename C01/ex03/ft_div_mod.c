/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:11:40 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:11:44 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a = 42;
	int	b = 10;
	int	div;
	int	mod;
	ft_div_mod(a, b, &div, &mod);
	printf("la valeur de div = %d\n", div);
	printf("la valeur de mod = %d\n", mod);
}
*/
