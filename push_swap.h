/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:10:36 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/09 16:25:20 by mabbadi          ###   ########.fr       */
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
int ft_error(char *msg);

void	sa(t_list *t);
void	sb(t_list *t);

#endif