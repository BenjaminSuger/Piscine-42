/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:12:46 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/19 21:12:55 by bsuger           ###   ########.fr       */
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
