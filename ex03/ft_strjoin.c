/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:01:33 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/25 16:06:05 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int	count_length(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += ft_strlen(sep) * (size - 1);
	return (length);
}

void	fill(int size, char **strs, char *sep, char *result)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_strcat(result, strs[i]);
		ft_strcat(result, sep);
		i++;
	}
	ft_strcat(result, strs[i]);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*result;

	if (size == 0)
	{
		result = malloc(sizeof(char) * 1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	length = count_length(size, strs, sep);
	result = malloc(sizeof(char) * length + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	fill(size, strs, sep, result);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char *strs[] = {"chat", "chien", "serpent"};
	char *sep = " et ";
	int size = 3;
	char *result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
}
*/
