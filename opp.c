/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:53:01 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/10 19:51:49 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list *first;
	if (!a || !b || !*b)
		ft_error("fail pa");
	first = *b;
	*b = (*b)->next;
	if (*a)
		first->next = *a;
	else
		first->next = NULL;
	*a = first;
	printf("\npa");
}
void	pb(t_list **a, t_list **b)
{
	t_list *first;
	if (!a || !b || !*a)
		ft_error("fail pb");
	first = *a;
	*a = (*a)->next;
	if (*b)
		first->next = *b;
	else
		first->next = NULL;
	*b = first;
	printf("\npb");
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
	printf("\nra");
}