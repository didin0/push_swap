/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:13:37 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/06 14:51:48 by mabbadi          ###   ########.fr       */
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
	t_list *lst = NULL;

	if (argc >= 2)
	{
		lst = ft_lstnew((void *)(intptr_t)ft_atoi(argv[i]));
		i++;
		while (argv[i])
		{
			if (!is_valid_argument(argv[i]))
				printf("argv : %s n'est pas valide.\n", argv[i]);
			ft_lstadd_back(&lst, ft_lstnew((void *)(intptr_t)ft_atoi(argv[i])));
			i++;
		}
	}
		if (lst == NULL)
	{
		printf("La liste est vide.\n");
		return 0;
	}
	if (contains_duplicate(lst))
			printf("La liste contient des doublons.\n");
	else
			printf("La liste ne contient pas de doublons.\n");
	findindex(lst);
	printf("%s", "Index :\n");
	ft_lstiter(lst, print, 0);
	printf("%s", "\nValeurs :\n");
	ft_lstiter(lst, print, 1); 
	return (0);
}
