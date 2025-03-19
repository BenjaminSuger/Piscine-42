/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:14:35 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:14:39 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest1[10];
	char	dest2[10];
	char	*src;

	src = "chats";

	strcpy(dest1,src);
	printf("vrai fonction %s\n", dest1);
	ft_strcpy(dest2, src);
	printf("ma fonction %s\n", dest2);
}
*/
