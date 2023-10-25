/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:14:19 by juvilleg          #+#    #+#             */
/*   Updated: 2023/10/11 12:14:26 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*alt;

	alt = (t_list *)malloc(sizeof(*alt));
	if (!alt)
		return (NULL);
	alt->content = content;
	alt->next = NULL;
	return (alt);
}
