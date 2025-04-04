/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 10:16:12 by bsuger            #+#    #+#             */
/*   Updated: 2025/04/04 11:38:46 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list	*stack;
	t_list	*temp;

	i = 0;
	while (i < size)
	{
		temp = ft_create_elem(strs[i]);
		temp -> next = stack;
		stack = temp;
		i++;
	}
	return (stack);
}
/*
int	main(void)
{

	char *strs[] = {"mignons", "chats", "les"};
	t_list *stack = ft_list_push_strs(3, strs);

	char *test = (char *) stack -> data;
	printf("%s\n", test);

	char *test2 = (char *) stack -> next -> data;
	printf("%s\n", test2);
	
	char *test3 = (char *) stack -> next -> next -> data;
	printf("%s\n", test3);
}
*/
