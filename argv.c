/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:56:58 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/10 18:10:27 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char **one_argv(char **argv, int argc)
{
	char **str;
	if (argc == 2)
	{
		if (!argv[1][0] || argv[1][0] == ' ')
		{
			write(1, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		str = ft_split(argv[1], ' ');
		return (str);
	}
	return (NULL);
}
t_list	*init_helper(char **argv, int num)
{
	t_list *lst = NULL;
	int i = num;
	if (is_valid_argument(argv[i]))
		lst = ft_lstnew((void *)(intptr_t)ft_atoi(argv[i]));
	else
		ft_error("argv n'est pas valide");
	i++;
	while (argv[i])
	{
		if (!is_valid_argument(argv[i]))
			ft_error("argv n'est pas valide");
		ft_lstadd_back(&lst, ft_lstnew((void *)(intptr_t)ft_atoi(argv[i])));
		i++;
	}
	return (lst);
}

t_list *init_lst(int argc, char **argv)
{
	t_list *lst = NULL;
	char **splited = one_argv(argv, argc);
	if (argc == 2)
		lst = init_helper(splited, 0);
	else if (argc > 2)
		lst = init_helper(argv, 1);
	return (lst);
}
