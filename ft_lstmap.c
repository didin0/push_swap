/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:53:14 by mabbadi           #+#    #+#             */
/*   Updated: 2023/04/14 18:53:37 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*i;

	if (lst == NULL || f == NULL)
		return (NULL);
	result = ft_lstnew(f(lst->content));
	if (!result)
		return (NULL);
	lst = lst->next;
	i = result;
	while (lst)
	{
		i->next = ft_lstnew(f(lst->content));
		if (!i->next)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		i = i->next;
		lst = lst->next;
	}
	return (result);
}
