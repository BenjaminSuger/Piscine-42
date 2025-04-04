/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 09:46:17 by bsuger            #+#    #+#             */
/*   Updated: 2025/04/04 14:39:12 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>

typedef struct			s_list
{
	struct s_list		*next;
	void			*data;
}				t_list;

t_list  *ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
int     ft_list_size(t_list *begin_list);
t_list  *ft_list_last(t_list *begin_list);
t_list  *ft_list_push_strs(int size, char **strs);

#endif
