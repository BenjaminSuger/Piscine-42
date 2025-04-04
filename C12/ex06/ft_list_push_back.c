/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 09:14:11 by bsuger            #+#    #+#             */
/*   Updated: 2025/04/04 10:05:24 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *end = ft_list_last(*begin_list);
	end -> next = ft_create_elem(data);
}
/*
int	main(void)
{
	t_list *stack = NULL;

	int i = 42; 
	int j = 41;
	int k = 40;
	int l = 39;

	int new_end = 56;
	
	//on push 4 elements
	ft_list_push_front(&stack, &i);
	ft_list_push_front(&stack, &j);
	ft_list_push_front(&stack, &k);
	ft_list_push_front(&stack, &l);
	
	//on check le dernier element qui est celui push en premier
	t_list *last_elem = ft_list_last(stack);
	int *last_elem_data = (int *) last_elem -> data;
	printf("%d\n", *(last_elem_data));
		
	
	//maintenant on ajoute un element a la fin 
	ft_list_push_back(&stack,&new_end);

	//maintenant on va regarder de nouveau le dernier element
	last_elem = ft_list_last(stack);
	last_elem_data = (int *) last_elem -> data;
	printf("%d\n", *(last_elem_data));	

}
*/
