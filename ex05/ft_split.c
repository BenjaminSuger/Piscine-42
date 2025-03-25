/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:31:38 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/25 16:05:26 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (is_sep(str[i], charset) == 0)
		count++;
	while (str[i])
	{
		if (is_sep(str[i - 1], charset) == 1 && is_sep(str[i], charset) == 0)
			count++;
		i++;
	}
	return (count);
}

int	length(char *str, char *charset, int *j)
{
	int	count;

	count = 0;
	while (is_sep(str[*j], charset) == 1)
		(*j)++;
	while (is_sep(str[*j], charset) == 0 && str[*j])
	{
		count++;
		(*j)++;
	}
	return (count);
}

void	fill(char *str, char *charset, int *j, char *result)
{
	int	i;

	i = 0;
	while (is_sep(str[*j], charset) == 1)
		(*j)++;
	while (is_sep(str[*j], charset) == 0 && str[*j])
	{
		result[i] = str[*j];
		i++;
		(*j)++;
	}
	result[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		words;
	char	**result;

	i = 0;
	j = 0;
	words = count_words(str, charset);
	result = malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);
	while (i < words)
	{
		result[i] = malloc(sizeof(char) * (length(str, charset, &j) + 1));
		i++;
	}
	i = 0;
	j = 0;
	while (i < words)
	{
		fill(str, charset, &j, result[i]);
		i++;
	}
	result[i] = NULL;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "les  chats, les+ dragons+- lesserpents";
	char sep[] = ", +-";
	char **result = ft_split(str,sep);
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	printf("%s\n", result[4]);
}
*/
