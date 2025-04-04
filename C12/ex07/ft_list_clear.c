/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:03:15 by bsuger            #+#    #+#             */
/*   Updated: 2025/04/04 15:36:28 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	free_fct(void *ptr)
{
	free(ptr);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *temp;
	while(begin_list)
	{
		temp = begin_list -> next;
		free_fct(begin_list);
		begin_list = temp;
	}
}
/*
int	main(void)
{
	char *strs[] = {"mignons", "chats", "les"};
	t_list *stack = ft_list_push_strs(3, strs);
	ft_list_clear(stack, &free_fct);
}
*/
