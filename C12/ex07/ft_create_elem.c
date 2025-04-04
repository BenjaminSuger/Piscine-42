/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:51:21 by bsuger            #+#    #+#             */
/*   Updated: 2025/04/03 13:24:56 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element -> next = NULL;
	element -> data = data;
	return (element);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *test;
	char *i = "chats";
	test = ft_create_elem(i);

	char *printdata = (char *) test -> data;

	printf("%c\n",*printdata);
	printf("%c\n",*(printdata + 1));

	free(test);
}
*/
