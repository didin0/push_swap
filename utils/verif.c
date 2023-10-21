/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:42:11 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/18 17:55:16 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_valid_argument(char *arg)
{
	char		*tmp;
	long long	value;
	int			first;

	tmp = arg;
	first = 1;
	if (*arg == '\0')
		return (0);
	while (*arg != '\0')
	{
		if (*arg == '-' || *arg == '+')
		{
			arg++;
			first = 0;
		}
		if (*arg < '0' || *arg > '9')
			return (0);
		arg++;
	}
	value = ft_atoll(tmp);
	if (value > INT_MAX || value < INT_MIN)
		return (0);
	return (1);
}

int	contains_duplicate(t_list *t)
{
	t_list	*current;
	int		current_value;
	t_list	*temp;
	int		temp_value;

	if (t == NULL)
		return (0);
	current = t;
	while (current->next)
	{
		current_value = ((intptr_t)current->content);
		temp = current->next;
		while (temp != NULL)
		{
			temp_value = ((intptr_t)temp->content);
			if (temp_value == current_value)
				return (ft_clear_stack(t), 1);
			temp = temp->next;
		}
		current = current->next;
	}
	return (0);
}

int	contains_not_digits(t_list *t)
{
	int	*content_int_ptr;

	content_int_ptr = NULL;
	if (t == NULL)
		return (0);
	while (t)
	{
		content_int_ptr = (int *)t->content;
		if (*content_int_ptr <= 0 || *content_int_ptr > 9)
			return (1);
		t = t->next;
	}
	return (0);
}
