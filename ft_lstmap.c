/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:53:14 by mabbadi           #+#    #+#             */
/*   Updated: 2023/04/18 19:13:15 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	result = ft_lstnew(f(lst->content));
	if (!result)
	{
		ft_lstclear(&result, del);
		return (NULL);
	}
	current = result;
	lst = lst->next;
	while (lst)
	{
		current->next = ft_lstnew(f(lst->content));
		if (!current->next)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		current = current->next;
		lst = lst->next;
	}
	return (result);
}
