/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:53:01 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/13 17:46:42 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*first;

	if (!a || !b || !*b)
		ft_error("fail pa", 0);
	first = *b;
	*b = (*b)->next;
	if (*a)
		first->next = *a;
	else
		first->next = NULL;
	*a = first;
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	t_list	*first;

	if (!a || !b || !*a)
		ft_error("fail pb", 0);
	first = *a;
	*a = (*a)->next;
	if (*b)
		first->next = *b;
	else
		first->next = NULL;
	*b = first;
	ft_printf("pb\n");
}

void	ra(t_list **a)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	last = NULL;
	if (a && *a)
	{
		first = *a;
		second = first->next;
		while ((*a)->next)
			*a = (*a)->next;
		last = *a;
		last->next = first;
		*a = second;
		first->next = NULL;
	}
	ft_printf("ra\n");
}

void	rra(t_list **a)
{
	t_list	*first;
	t_list	*before_last;
	t_list	*last;
	int		i;

	last = NULL;
	i = ft_lstsize(*a) - 2;
	if (a && *a)
	{
		first = *a;
		while (i != 0)
		{
			*a = (*a)->next;
			i--;
		}
		before_last = *a;
		last = (*a)->next;
		last->next = first;
		*a = last;
		before_last->next = NULL;
	}
	ft_printf("rra\n");
}
