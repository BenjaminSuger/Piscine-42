/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 16:59:13 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/23 18:27:11 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base, int length)
{
	int	i;
	int	j;

	i = 0;
	if (length == 1)
		return (1);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (1);
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	length;
	unsigned int	value;

	value = nbr;
	if (base == NULL)
		return ;
	length = ft_strlen(base);
	if (check_base(base, length))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		value = nbr * -1;
	}
	if (value <= length)
	{
		ft_putchar(base[value]);
	}
	else if (value > length)
	{
		ft_putnbr_base(value / length, base);
		ft_putnbr_base(value % length, base);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(123,"01234567");
	ft_putchar('\n');
	ft_putnbr_base(123,"01");
	ft_putchar('\n');
	ft_putnbr_base(-123,"0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(-2147483648,"0123456789");
	ft_putchar('\n');
}
*/
