# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/08 17:00:13 by ciclo             #+#    #+#              #
#    Updated: 2022/07/09 15:37:36 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include libft/Makefile # incluyendo el makefile de libft

# variables del make

NAME = libftprintf.a

SRC = ft_printf.c

OBJ = $(SRC:.c=.o) # tiene que estar junta la declaracion porque sino elimina los .c en vez de los .o

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

#
val = valgrind

SANI = -fsanitize=address -g3

CC = gcc

all: $(NAME)

$(NAME):$(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME) && ./libftprintf.a
	@echo "compilation done"

sanitize:

	$(CC) $(FLAGS) $(SANI) $(SRC)
	@echo "sanitize memory likes done"
clean :
	@$(RM) $(OBJ)
	@echo "clean done"

fclean: clean
	@$(RM) $(NAME)
	@echo "fclean done"
re:
