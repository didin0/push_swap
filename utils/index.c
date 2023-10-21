/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:50:11 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/13 17:02:28 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	getindex(t_list *t, long value)
{
	t_list	*tmp;
	int		index;

	tmp = t;
	index = 0;
	while (tmp)
	{
		if (value > (intptr_t)tmp->content)
			index++;
		tmp = tmp->next;
	}
	return (index);
}

void	findindex(t_list *t)
{
	t_list	*tmp;

	tmp = t;
	while (tmp->next != NULL)
	{
		tmp->index = getindex(t, (intptr_t)tmp->content);
		tmp = tmp->next;
	}
	tmp->index = getindex(t, (intptr_t)tmp->content);
	tmp = tmp->next;
}

int	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->index > head->next->index)
			return (0);
		head = head->next;
	}
	return (1);
}
