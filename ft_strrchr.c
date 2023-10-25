/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:12:27 by juvilleg          #+#    #+#             */
/*   Updated: 2023/09/17 09:33:41 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)(str + i));
		i--;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)(str + i));
	return (0);
}
