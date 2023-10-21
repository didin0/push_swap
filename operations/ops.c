/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:36:10 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/13 17:46:54 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **t)
{
	t_list	*first;
	t_list	*second;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(*t) < 2)
		return ;
	first = *t;
	second = first->next;
	if (!first && !second)
		ft_error("Error occured while swapping!", 0);
	tmp_val = (intptr_t)first->content;
	tmp_index = first->index;
	first->content = (void *)(intptr_t)second->content;
	first->index = second->index;
	second->content = (void *)(intptr_t)tmp_val;
	second->index = tmp_index;
	ft_printf("sa\n");
}

void	sb(t_list **t)
{
	t_list	*first;
	t_list	*second;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(*t) < 2)
		return ;
	first = *t;
	second = first->next;
	if (!first && !second)
		ft_error("Error occured while swapping!", 0);
	tmp_val = (intptr_t)first->content;
	tmp_index = first->index;
	first->content = (void *)(intptr_t)second->content;
	first->index = second->index;
	second->content = (void *)(intptr_t)tmp_val;
	second->index = tmp_index;
	ft_printf("sb\n");
}

void	ss(t_list *t1, t_list *t2)
{
	sa(&t1);
	sb(&t2);
}
