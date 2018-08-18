# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amedvede <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/07 15:38:30 by amedvede          #+#    #+#              #
#    Updated: 2018/08/07 17:03:42 by amedvede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
FILE_NAMES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ_NAMES  = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = includes/

all: $(NAME)

$(NAME):
	
	gcc -Wall -Werror -Wextra -I $(HEADER) -c  $(FILE_NAMES)
	ar rc $(NAME) $(OBJ_NAMES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ_NAMES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
