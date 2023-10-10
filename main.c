/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:13:37 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/10 19:56:11 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print(void *content)
{
	printf("%d | ", (int)content);
}


int	main(int argc, char **argv)
{
	t_list *lst = init_lst(argc, argv);
	t_list *b = NULL;

	if (lst == NULL)
		ft_error("!!!La liste est vide.!!!\n");
	if (contains_duplicate(lst))
			ft_error("!!!La liste contient des doublons.!!!\n");
	findindex(lst);
	printf("%s", "Index BEFORE :\n");
	ft_lstiter(lst, print, 0);
	printf("%s", "\nValeurs BEFORE :\n");
	ft_lstiter(lst, print, 1);
	if (!is_sorted(&lst))
		radix(&lst, &b);
	printf("%s", "\nIndex AFTER :\n");
	ft_lstiter(lst, print, 0);
	printf("%s", "\nValeurs AFTER :\n");
	ft_lstiter(lst, print, 1); 
	return (0);
}
