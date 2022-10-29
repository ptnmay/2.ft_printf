# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 22:40:35 by psaeyang          #+#    #+#              #
#    Updated: 2022/09/13 15:14:24 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

SRC = ft_printhex.c \
      ft_print_u.c \
      ft_printdi.c \
      ft_print_p.c \
      ft_print_x.c \
      ft_printf.c \
      ft_printf_s.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

%o: %c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
