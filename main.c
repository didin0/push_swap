/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:13:37 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/09 16:53:58 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print(void *content)
{
	printf("%d | ", (int)content);
}

int	main(int argc, char **argv)
{
	int i = 1;
	t_list *lst = NULL;

	if (argc > 2)
	{
		if (is_valid_argument(argv[i]))
			lst = ft_lstnew((void *)(intptr_t)ft_atoi(argv[i]));
		else
			return (ft_error("argv n'est pas valide"));
		i++;
		while (argv[i])
		{
			if (!is_valid_argument(argv[i]))
				return (ft_error("argv n'est pas valide"));
			ft_lstadd_back(&lst, ft_lstnew((void *)(intptr_t)ft_atoi(argv[i])));
			i++;
		}
	}

	if (lst == NULL)
		return (ft_error("!!!La liste est vide.!!!\n"));
	if (contains_duplicate(lst))
			return(ft_error("!!!La liste contient des doublons.!!!\n"));
	findindex(lst);
	printf("%s", "Index BEFORE :\n");
	ft_lstiter(lst, print, 0);
	printf("%s", "\nValeurs BEFORE :\n");
	ft_lstiter(lst, print, 1);
	sa(lst);
	// sb(lst);
	printf("%s", "\nIndex AFTER :\n");
	ft_lstiter(lst, print, 0);
	printf("%s", "\nValeurs AFTER :\n");
	ft_lstiter(lst, print, 1); 
	return (0);
}

// int main()
// {
//     // Créer les nœuds et attribuer des valeurs
//     t_list node1, node2, node3, node4;
//     int value1 = 10, value2 = 20, value3 = 30, value4 = 40;

//     node1.content = (void *)&value1;
//     node1.next = &node2;

//     node2.content = (void *)&value2;
//     node2.next = &node3;

// 		node3.content = (void *)&value3;
//     node3.next = &node4;

//     node4.content = (void *)&value4;
//     node4.next = NULL;

//     printf("Liste avant inversion : %d %d %d %d\n", value1, value2, value3, value4);
//     sa(&node1);
//     printf("Liste après inversion : %d %d %d %d\n", value1, value2, value3, value4);

//     return 0;
// }
