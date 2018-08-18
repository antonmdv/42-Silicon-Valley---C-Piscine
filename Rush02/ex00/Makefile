# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amedvede <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/12 15:46:14 by amedvede          #+#    #+#              #
#    Updated: 2018/08/12 18:13:34 by amedvede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EX_NAME = colle-2
COMPILE = gcc -Wall -Werror -Wextra
MAIN = main.c
HEADERS = -I headers
FUNCTIONS = ./functions/*.c
RUSHES = ./functions/rushes/*.c
all:
	$(COMPILE) $(HEADERS) $(MAIN) $(FUNCTIONS) $(RUSHES) -o $(EX_NAME)

fclean:
	/bin/rm -f $(EX_NAME);
