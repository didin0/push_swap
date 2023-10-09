/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:36:10 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/09 16:55:32 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_list *t)
{
    if (t == NULL || t->next == NULL)
    {
        // La liste est vide ou a moins de trois éléments, rien à faire.
        return;
    }

    t_list *first = t;     // Premier élément (élément 0)
    t_list *second = first->next;   // Deuxième élément (élément 1)

    // Inverser les valeurs (content) des deux premiers éléments
    void *temp_content = first->content;
    first->content = second->content;
    second->content = temp_content;
		printf("\nsa\n");
}

void	sb(t_list *t)
{
    if (t == NULL || t->next == NULL || t->next->next == NULL)
    {
        // La liste est vide ou a moins de trois éléments, rien à faire.
        return;
    }

    t_list *first = t;     // Premier élément (élément 0)
    t_list *second = first->next;   // Deuxième élément (élément 1)

    // Inverser les valeurs (content) des deux premiers éléments
    void *temp_content = first->content;
    first->content = second->content;
    second->content = temp_content;
		printf("\nsb\n");
}

void	ss(t_list *t1, t_list *t2)
{
	sa(t1);
	sb(t2);
}