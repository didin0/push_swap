/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:10:36 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/16 15:25:37 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include "ft_printf/includes/ft_printf.h"
# include <limits.h>

int		is_valid_argument(char *arg);
int		getindex(t_list *t, long value);
int		contains_duplicate(t_list *t);
int		contains_not_digits(t_list *t);
void	findindex(t_list *t);
void	ft_error(char *msg, int debug);
t_list	*init_lst(int argc, char **argv);
char	**one_argv(char **argv, int argc);
t_list	*init_helper(char **argv, int num, int argc);
int		is_sorted(t_list **stack);
void	small_sort(t_list **stack_a, t_list **stack_b);
int		get_distance(t_list **stack, int index);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_3(t_list **stack_a);
int		get_min(t_list **stack, int val);
void	ft_clear_stack(t_list *t);
void	free_tab(char **tab);
void	free_good_thing(char **argv, t_list	*lst, int argc);
void	small_sorting(t_list **stack_a, t_list *head, int min, int next_min);

void	sa(t_list **t);
void	sb(t_list **t);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rra(t_list **a);
void	radix(t_list **stack_a, t_list **stack_b);
#endif