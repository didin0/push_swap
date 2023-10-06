/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:36:10 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/06 18:20:23 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *t)
{
	intptr_t	tmp;
	t_list *first = t;

	tmp = (intptr_t)t->content;
	t->content = t->next->content;
	t->next->content = (void *)tmp;
	t = first;
}
void	sb(t_list *t)
{

}

void	ss(t_list *t)
{

}