/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:56:58 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/18 15:41:57 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab && tab[i])
	{
		if (tab[i])
			free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_good_thing(char **argv, t_list	*lst, int argc)
{
	if (argc == 2)
	{
		free_tab(argv);
		ft_clear_stack(lst);
	}
	else
		ft_clear_stack(lst);
}

char	**one_argv(char **argv, int argc)
{
	char	**str;

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

t_list	*init_helper(char **argv, int num, int argc)
{
	t_list	*lst;
	int		i;

	lst = NULL;
	i = num;
	if (is_valid_argument(argv[i]))
		lst = ft_lstnew((void *)(intptr_t)ft_atoi(argv[i]));
	else
	{
		free_good_thing(argv, lst, argc);
		ft_error("argv n'est pas valide", 0);
	}
	i++;
	while (argv[i])
	{
		if (!is_valid_argument(argv[i]))
		{
			free_good_thing(argv, lst, argc);
			ft_error("argv n'est pas valide", 0);
		}
		ft_lstadd_back(&lst, ft_lstnew((void *)(intptr_t)ft_atoi(argv[i])));
		i++;
	}
	return (lst);
}

t_list	*init_lst(int argc, char **argv)
{
	int		i;
	t_list	*lst;
	char	**splited;

	i = 0;
	lst = NULL;
	if (argc == 2)
	{
		splited = one_argv(argv, argc);
		lst = init_helper(splited, 0, argc);
		free_tab(splited);
	}
	else if (argc > 2)
		lst = init_helper(argv, 1, argc);
	return (lst);
}
