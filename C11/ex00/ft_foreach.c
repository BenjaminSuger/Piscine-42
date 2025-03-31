/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 09:52:06 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/30 10:12:50 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <unistd.h> 

void	is_neg(int i)
{
	if (i < 0)
		write(1, "negative\n", 9);
	else
		write(1, "popo number\n", 12);
}

int	main()
{
	int array[] = {72,-69,76,-76};
	ft_foreach(array, 4, &is_neg);
}
*/
