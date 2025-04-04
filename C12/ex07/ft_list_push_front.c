/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:32:26 by bsuger            #+#    #+#             */
/*   Updated: 2025/04/03 16:24:52 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*element;

	element = ft_create_elem(data);
	//need security or not ? 
	element -> next = *begin_list;
	*begin_list = element;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *stack;
	stack = NULL;

	//premier
	int i = 42;
	ft_list_push_front(&stack, &i);

	//test
	int *test = (int *) stack -> data;
	printf("%d\n", *(test));

	//second push
	int j = 41;
	ft_list_push_front(&stack, &j);

	//test
	test = (int *) stack -> data;
	int *test2 = (int *) stack -> next -> data;
	printf("%d\n", *(test));
	printf("%d\n", *(test2));
}
*/
