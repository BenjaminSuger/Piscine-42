/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:02:11 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/17 22:08:48 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	argc = 0;
	while (argv[0][argc])
	{
		write(1, &argv[0][argc], 1);
		argc++;
	}
	write(1, "\n", 1);
}
/*
the use of argc here is just to hack the flags, hack the moulinette 
and hack the world 
*/
