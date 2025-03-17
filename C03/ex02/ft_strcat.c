/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:22:10 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:22:14 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{

	char dest[50] = {'c','h','a','t'};
	char src[] = "ons";

	char dest2[50] = {'c','h','a','t'};
	char src2[] = "ons";

	printf("strcat ; %s\n", strcat(dest, src));
	printf("ft_strcat ; %s\n", ft_strcat(dest2, src2));

}
*/
