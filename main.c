/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:13:37 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/04 19:26:14 by mabbadi          ###   ########.fr       */
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
	printf("%d | ", (int)content);
}

int	main(int argc, char **argv)
{
	int i = 1;
	t_list *lst;

	if (argc > 2)
	{
		lst = ft_lstnew((void *)(intptr_t)ft_atoi(argv[i]));
		i++;
		while (argv[i])
		{
				ft_lstadd_back(&lst, ft_lstnew((void *)(intptr_t)ft_atoi(argv[i])));
			i++;
		}
	}
	printf("%s", "Index :\n");
	ft_lstiter(lst, print, 0);
	printf("%s", "\nValeurs :\n");
	ft_lstiter(lst, print, 1);
	return (0);
}
