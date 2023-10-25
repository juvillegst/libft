/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:13:15 by juvilleg          #+#    #+#             */
/*   Updated: 2023/10/11 12:13:37 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_lstsize(lst);
	if (lst)
	{
		while (i < size - 1)
		{
			lst = lst->next;
			i++;
		}
	}
	return (lst);
}
