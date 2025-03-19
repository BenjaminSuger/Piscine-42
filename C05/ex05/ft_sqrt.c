/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:11:15 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/19 21:11:22 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	while (i * i <= nb)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
