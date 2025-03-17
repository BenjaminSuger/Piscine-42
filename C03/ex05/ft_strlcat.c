/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:35:31 by bsuger            #+#    #+#             */
/*   Updated: 2025/03/17 21:59:45 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int sized)
{
	unsigned int	dlen;
	unsigned int	i;

	i = 0;
	dlen = ft_strlen(dest);
	if (dlen >= size)
		return (size + dlen);
	while (src[i] && (dlen + i) < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + ft_strlen(src);
	
}
