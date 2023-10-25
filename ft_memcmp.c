/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:52:00 by juvilleg          #+#    #+#             */
/*   Updated: 2023/09/21 18:02:26 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1re;
	unsigned char	*s2re;

	i = 0;
	s1re = (unsigned char *)s1;
	s2re = (unsigned char *)s2;
	while (i < n)
	{
		if (s1re[i] != s2re[i])
			return (s1re[i] - s2re[i]);
		i++;
	}
	return (0);
}
