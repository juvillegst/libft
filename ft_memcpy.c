/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:55:23 by juvilleg          #+#    #+#             */
/*   Updated: 2023/09/15 18:37:48 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dstre;
	char	*srcre;

	dstre = (char *)dst;
	srcre = (char *)src;
	i = 0;
	if (!src && !dst)
		return (0);
	while (i < n)
	{
		dstre[i] = srcre[i];
		i++;
	}
	return (dst);
}
