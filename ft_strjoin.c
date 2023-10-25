/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:31:22 by juvilleg          #+#    #+#             */
/*   Updated: 2023/09/22 10:22:13 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*boths;
	size_t	bothlen;

	bothlen = ft_strlen(s1) + ft_strlen(s2);
	boths = (char *)malloc(sizeof(char) * (bothlen + 1));
	if (!boths)
		return (0);
	ft_memcpy(boths, s1, ft_strlen(s1));
	ft_memcpy(boths + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (boths);
}
