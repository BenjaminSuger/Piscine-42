/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:51:13 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/19 20:56:54 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result *= ft_recursive_power(nb, power - 1);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(4,4));
}
*/
