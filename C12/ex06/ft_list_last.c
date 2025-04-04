/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:00:39 by bsuger            #+#    #+#             */
/*   Updated: 2025/04/04 09:09:32 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list)
	{
		while(begin_list)
		{
			if (begin_list -> next == NULL)
				return (begin_list);
			begin_list = begin_list -> next;
		}
	}
	return (NULL);
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

	t_list *last_elem = ft_list_last(stack);
	int *test1 = (int *) last_elem -> data;
	printf("%d\n", *(test1));
}
*/
