/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:21:27 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:21:34 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1 = "ch";
	char *s2 = "chat";

	char *s3 = "ABC";
	char *s4 = "ABCD";
	printf("strmcp %d, ma version %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
	printf("strmcp %d, ma version %d\n", strcmp(s3, s4), ft_strcmp(s3, s4));
}
*/
