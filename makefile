# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vasari <vasari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/27 15:35:31 by vasari            #+#    #+#              #
#    Updated: 2025/11/27 16:47:36 by vasari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "printf.h"

SRCS = ft_printf.c ft_printf.h ft_putchar.c ft_putstr.c ft_putnbr.c \
		ft_putnbr_unsigned.c ft_puthex.c ft_putptr.c ft_utils.c


OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o) // ca ca degage

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -fr
AR = ar rcs

NAME = printf.a

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c -I include/ $< -o $@
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(ar) $(NAME) $(OBJS)

fclean:
	$(ar) $(NAME) $(BONUS_OBJS)

re: fclean all

.PHONY: all clean fclean re bonus

