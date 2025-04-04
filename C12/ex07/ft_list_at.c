/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:51:26 by bsuger            #+#    #+#             */
/*   Updated: 2025/04/04 16:57:32 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int	i;
	t_list *temp;

	i = 0;
	temp = begin_list;
	while (i < nbr)
	{
		temp = temp -> next;
		i++;
	}
	return (temp);
}

int	main(void)
{
	t_list *stack = NULL;
	char *strs[] = {"chats", "chien", "serpent", "dragon"};

	stack = ft_list_push_strs(4, strs);
	t_list *element = ft_list_at(stack, 0);
	char *test = (char *) element -> data;
	printf("%s\n", test);
}
