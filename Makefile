# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabbadi <mabbadi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 16:34:15 by mabbadi           #+#    #+#              #
#    Updated: 2023/10/16 14:59:03 by mabbadi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror -g3

# Liste des fichiers source
SOURCES := $(wildcard operations/*.c) \
		   $(wildcard sorting/*.c) \
		   $(wildcard utils/*.c) \
		   push_swap.c \
		   $(wildcard Libft/*.c) \
		   $(wildcard ft_printf/srcs/*.c)

# Liste des fichiers d'en-tête
HEADERS := $(wildcard ft_printf/includes/*.h) \
					$(wildcard *.h) \
		   		$(wildcard Libft/*.h)

# Génération de la liste des fichiers objets
OBJECTS := $(SOURCES:.c=.o)

# Règle pour la compilation des fichiers source en fichiers objets
%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -Iincludes -c $< -o $@

# Règle pour la création de l'exécutable
$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
