/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:13:37 by mabbadi           #+#    #+#             */
/*   Updated: 2023/10/05 17:39:22 by mabbadi          ###   ########.fr       */
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
	printf("%d | ", (int)content);
}
void incrindex(t_list *valeur)
{
		t_list *tmp = valeur;
		int	size = ft_lstsize(valeur);
		int	indices_updated = 1;
		t_list *start = valeur;
	while (indices_updated)
	{
			indices_updated = 0;
			tmp = valeur;
			
		while (valeur->next)
		{
			if (valeur->content < valeur->next->content)
			{
				valeur->index += 1;
				indices_updated = 1;
			}
				valeur = valeur->next;
		}
		if (!indices_updated)
		{
			tmp = valeur;
			while (tmp->next != NULL) {
					tmp = tmp->next;
			}
			tmp->next = start;
		}
	}
}

int getindex(t_list *t,long value )
{
	t_list *tmp ; 

	tmp = t;

	int index = 0; 
	while (tmp)
	{ 
		if (value  > (intptr_t)tmp->content)
			index++; 
		tmp = tmp->next;
	}
	return index ;
}

void findindex(t_list *t)
{ 
	t_list *tmp = t; 
	int index = 0; 

	while (tmp->next != NULL)
	{
			tmp->index=getindex(t,(intptr_t)tmp->content);
			tmp = tmp->next;
	}
	tmp->index=getindex(t,(intptr_t)tmp->content);
	tmp = tmp->next;
}
int	checkdouble(t_list *t)
{
	t_list *tmp = t;
	while (tmp->next)
	{
		while (t->next)
		{
			if ((int)t->content == (int)tmp->content)
				return (1);
			t = t->next;
		}
		t = tmp;
		t->next = tmp->next;
		tmp = tmp->next;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i = 1;
	t_list *lst;

	if (argc > 2)
	{
		lst = ft_lstnew((void *)(intptr_t)ft_atoi(argv[i]));
		i++;
		while (argv[i])
		{
			ft_lstadd_back(&lst, ft_lstnew((void *)(intptr_t)ft_atoi(argv[i])));
			i++;
		}
	}
	if (!0)
		printf("%s", "!!!ERREUR DOUBLES!!!\n");
	findindex(lst);
	printf("%s", "Index :\n");
	ft_lstiter(lst, print, 0);
	printf("%s", "\nValeurs :\n");
	ft_lstiter(lst, print, 1); 
	return (0);
}
