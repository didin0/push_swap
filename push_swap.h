/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:10:36 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/10 19:55:58 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <limits.h>
#include "Libft/libft.h"

int is_valid_argument(char *arg);
int getindex(t_list *t,long value);
int contains_duplicate(t_list *t);
int contains_not_digits(t_list *t);
void findindex(t_list *t);
void ft_error(char *msg);
t_list *init_lst(int argc, char **argv);
char **one_argv(char **argv, int argc);
t_list	*init_helper(char **argv, int num);
int	is_sorted(t_list **stack);


void	sa(t_list *t);
void	sb(t_list *t);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	radix(t_list **stack_a, t_list **stack_b);

#endif