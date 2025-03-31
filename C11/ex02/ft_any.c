/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 10:41:07 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/30 11:09:52 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	is_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *tab[] ={"chats", "serpent", "Dragon", NULL};
	char *tab2[] ={"chats", "serpent", "dragon", NULL};
	printf("%d\n", ft_any(tab,&is_upper));
	printf("%d\n", ft_any(tab2,&is_upper));
}
*/
