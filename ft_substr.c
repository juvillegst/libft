/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:55:23 by juvilleg          #+#    #+#             */
/*   Updated: 2023/09/28 12:08:03 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	i = 0;
	j = 0;
	if (start >= ft_strlen(str))
		len = 0;
	if (len > ft_strlen(str) - start)
		len = ft_strlen(str) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	while (str[i] != '\0')
	{
		if (i >= start && j < len)
		{
			substr[j] = str[i];
			j++;
		}
		i++;
	}
	substr[j] = '\0';
	return (substr);
}
