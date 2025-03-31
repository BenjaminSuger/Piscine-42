/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:50:44 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/31 13:22:03 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	add(int a, int b)
{
	return (a + b);
}

int	minus(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	div(int a, int b)
{
	if (b == 0)
	{
		write(1, "div by ", 8);
		return (0);
	}
	return (a / b);
}

int	mod(int a, int b)
{
	if (b == 0)
	{
		write(1, "mod by ", 8);
		return (0);
	}
	return (a % b);
}
