/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:31:55 by bsuger            #+#    #+#             */
/*   Updated: 2025/04/03 17:59:34 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;
	t_list	*temp;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list -> next;
	}
	return (i);
}
/*
int	main(void)
{
	t_list *stack = NULL;

	int i = 42;
	int j = 41;
	int k = 40;
	int l = 39;

	ft_list_push_front(&stack, &i);
	ft_list_push_front(&stack, &j);
	ft_list_push_front(&stack, &k);
	ft_list_push_front(&stack, &l);

	int test = ft_list_size(stack);
	printf("%d elements dans la stack\n", test);

	int *test1 = (int *) stack -> data;
	printf("%d\n", *(test1));

	
}
*/
