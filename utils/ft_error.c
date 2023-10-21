/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:04:31 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/14 14:36:06 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *msg, int debug)
{
	if (debug)
		ft_printf("Error %s", msg);
	else
		write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
