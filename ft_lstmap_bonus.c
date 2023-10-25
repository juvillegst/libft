/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juvilleg <juvilleg@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:52:27 by juvilleg          #+#    #+#             */
/*   Updated: 2023/10/16 16:19:47 by juvilleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*alt;
	void	*data;

	newlst = 0;
	while (lst)
	{
		data = f(lst->content);
		alt = ft_lstnew(data);
		if (!alt)
		{
			free(data);
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, alt);
		lst = lst->next;
	}
	return (newlst);
}
