/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:25:21 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/21 21:15:03 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
	printf("%d\n", ft_atoi(" \t \r  --++1234ab567"));
	printf("%d\n", ft_atoi("   ---+--+ab567"));
	printf("%d\n", ft_atoi("   -7"));
}
*/
