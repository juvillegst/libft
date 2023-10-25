/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:26:29 by juvilleg          #+#    #+#             */
/*   Updated: 2023/10/18 12:01:18 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcont(const char *str, char c)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			cont++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (cont);
}

static size_t	ft_wordlen(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
}

static char	**ft_allocate(const char *str, char c, char **array, size_t cont)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < cont)
	{
		while (str[j] && str[j] == c)
			j++;
		array[i] = ft_substr(str, j, ft_wordlen(&str[j], c));
		if (!array[i])
		{
			free_array(i, array);
			return (0);
		}
		while (str[j] != '\0' && str[j] != c)
			j++;
		i++;
	}
	array[i] = 0;
	return (array);
}

char	**ft_split(const char *str, char c)
{
	char	**array;
	size_t	size;

	if (!str)
		return (0);
	size = ft_wordcont(str, c);
	array = (char **)malloc(sizeof(char *) * (size + 1));
	if (!array)
		return (0);
	array = ft_allocate(str, c, array, size);
	return (array);
}
