/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:21:48 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/15 17:21:52 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	unsigned int i = 10;
	char *s1 = "chats";
	char *s2 = "chatons";
	printf("n = %d, strnmcp = %d, ma fonction = %d\n", i, 
	strncmp(s1,s2,i), ft_strncmp(s1,s2,i));
}
*/
