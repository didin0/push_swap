/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:13:37 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/18 16:46:30 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clear_stack(t_list *lst)
{
	t_list	*current;
	t_list	*next;

	current = lst;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*b;
	int		size;

	if (argc == 1)
		return (0);
	b = NULL;
	lst = init_lst(argc, argv);
	size = ft_lstsize(lst);
	if (lst == NULL)
		ft_error("!!!La liste est vide.!!!\n", 0);
	if (contains_duplicate(lst))
		ft_error("!!!La liste contient des doublons.!!!\n", 0);
	findindex(lst);
	if (!is_sorted(&lst))
	{
		if (size <= 5)
			small_sort(&lst, &b);
		else
			radix(&lst, &b);
	}
	ft_clear_stack(lst);
	ft_clear_stack(b);
	return (0);
}
