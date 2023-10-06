/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:42:11 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/06 14:52:00 by mabbadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_valid_argument(const char *arg)
{
    if (*arg == '\0')
        return 0;  // Chaîne vide

    // Vérifier chaque caractère de l'argument
    while (*arg != '\0') {
        if (*arg < '0' || *arg > '9')
            return 0;  // Le caractère n'est pas un chiffre
        arg++;
    }

    // Convertir l'argument en entier
    long long int value = ft_atoll(arg);

    // Vérifier si la conversion a échoué ou si la valeur dépasse INT_MAX
    if (value > INT_MAX)
        return 0;  // La valeur dépasse INT_MAX

    return 1;  // L'argument est valide
}
int contains_duplicate(t_list *t)
{
	if (t == NULL)
		return 0;

	t_list *current = t;
	while (current->next)
	{
		int current_value = ((intptr_t)current->content);
		t_list *temp = current->next;
		while (temp != NULL)
		{
			int temp_value = ((intptr_t)temp->content);
			if (temp_value == current_value)
				return 1;
			temp = temp->next;
		}
		current = current->next;
	}

	return 0;
}

int contains_not_digits(t_list *t)
{
	if (t == NULL)
		return 0;

	while (t)
	{
		int *content_int_ptr = (int *)t->content;

		// Vérifier si le contenu est un digit
		if (*content_int_ptr <= 0 || *content_int_ptr > 9)
			return 1;  // Si ce n'est pas un digit, retourner 1 (true)

		t = t->next;
	}

	return 0;  // Tous les éléments sont des digits, retourner 0 (false)
}