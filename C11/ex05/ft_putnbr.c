/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:35:55 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/30 18:49:12 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb >= 0 && nb <= 9)
			ft_putchar(nb + '0');
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
