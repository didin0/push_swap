/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:13:37 by mabbadi           #+#    #+#             */
/*   Updated: 2023/09/27 17:33:45 by mabbadi          ###   ########.fr       */
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

// int	checkargv(int ac, char *av)
// {
// 	int i = 1;
// 	int j = 1;

// 	while (i < ac)
// 	{
// 		if (ft_strchr(av[i], ))
// 			return 1;
// 		i++;
// 	}
// 	return 0;
// }

int	main(int argc, char **argv)
{
	int i = 1;
	t_list *lst;

	if (argc > 2)
	{
		lst = ft_lstnew(ft_atoi(argv[i]));
		i++;
		while (argv[i])
		{
				ft_lstadd_back(&lst, ft_lstnew(argv[i]));
			i++;
		}
	}
	ft_lstiter(lst, print);
	return (0);
}
