/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:01:52 by juvilleg          #+#    #+#             */
/*   Updated: 2023/09/17 10:46:35 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*strre;

	strre = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (strre[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
