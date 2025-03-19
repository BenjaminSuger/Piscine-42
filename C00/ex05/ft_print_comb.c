/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:06:56 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:07:00 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	nb1;
	char	nb2;
	char	nb3;

	nb1 = '0';
	while (nb1 <= '7')
	{
		nb2 = nb1 + 1;
		while (nb2 <= '8')
		{
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{
				write(1, &nb1, 1);
				write(1, &nb2, 1);
				write(1, &nb3, 1);
				if (nb1 != '7')
					write(1, ", ", 2);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
