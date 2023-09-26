/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:13:37 by mabbadi           #+#    #+#             */
/*   Updated: 2023/09/26 16:49:50 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
	 1 - init struct Bigstack { char **argv	-> taille  = argc - 1 
	 														int argc ;					
		}
		mettre tout argv{i} dans b->argv[i];

		2 - check arg de b->argv[i] ; > si y a des double, limits, si cest un num ; 

		3 - while(b->argv[i]) > t_list a = b->argv[i] ; 
		
		4 - find index ; 
					  " 2 0 1 " > 
*/
void print(void *content)
{
	printf("%s | ", (char *)content);
}

int	main(int argc, char **argv)
{
	int i = 1;
	t_list *lst;

	if (argc > 2)
	{
		lst = ft_lstnew(argv[i]);
	}
ft_lstadd_front(&lst, ft_lstnew(argv[2]));
ft_lstadd_front(&lst, ft_lstnew(argv[3]));
	ft_lstiter(lst, print);
	return (0);
}
