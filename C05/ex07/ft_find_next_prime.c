/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:20:59 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/19 21:22:29 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count > 2)
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	else
	{
		return (ft_find_next_prime(nb + 1));
	}
}
/*
#include <stdio.h>
int	main()
{
	int i = ft_find_next_prime(32);
	printf("%d\n",i);
}
*/
