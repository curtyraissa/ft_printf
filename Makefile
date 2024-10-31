# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/28 10:53:04 by rcurty-g          #+#    #+#              #
#    Updated: 2024/10/31 11:54:45 by rcurty-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c basic_print_utils.c hex_pointer_utils.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
