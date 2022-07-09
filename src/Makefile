# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 17:00:13 by ciclo             #+#    #+#              #
#    Updated: 2022/07/09 15:52:41 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include libft/Makefile # incluyendo el makefile de libft

# variables del make

NAME = libftprintf.a

SRC = ft_printf.c

OBJ = $(SRC:.c=.o) # tiene que estar junta la declaracion porque sino elimina los .c en vez de los .o

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

# rules of memory leaks
val = valgrind

SANI = -fsanitize=address -g3

CC = gcc

# compilacion principal del make
all: $(NAME) # regla de relink del make si ya esta creado el name no volvera a crearlo

$(NAME):$(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME) && ./libftprintf.a
	@echo "compilation done"

sanitize:

	$(CC) $(FLAGS) $(SANI) $(SRC)
	@echo "sanitize memory likes done"
valgrind:
	$(val)	./libftprintf.a
clean :
	@$(RM) $(OBJ)
	@echo "clean done"

fclean: clean
	@$(RM) $(NAME) *.out
	@echo "fclean done"
re:
