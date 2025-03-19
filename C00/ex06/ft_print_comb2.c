/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:07:21 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:07:27 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_putchar((nb1 / 10) + '0');
			ft_putchar((nb1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((nb2 / 10) + '0');
			ft_putchar((nb2 % 10) + '0');
			if (nb1 != 98)
				write(1, ", ", 2);
			nb2++;
		}
		nb1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
