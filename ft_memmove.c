/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:58:24 by juvilleg          #+#    #+#             */
/*   Updated: 2023/09/22 11:06:27 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstre;
	char	*srcre;

	dstre = (char *)dst;
	srcre = (char *)src;
	if (!dst && !src)
		return (0);
	if (src < dst)
	{
		while (len--)
			dstre[len] = srcre[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
