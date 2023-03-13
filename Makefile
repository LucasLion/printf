# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 11:10:36 by llion             #+#    #+#              #
#    Updated: 2023/01/14 18:24:16 by llion            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c ft_printnbr.c ft_printchar.c ft_printstr.c \
			  ft_printuint.c ft_printx_min.c ft_printx.c ft_printp.c \
			  ft_printpct.c ft_numlen.c
OBJS		= $(SRCS:.c=.o)
NAME		= libftprintf.a
CC			= gcc
DEBUG		= -g
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rc
RM			= rm -rf
LIB			= ranlib

#* -------- TARGETS ----------*#

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(LIBFT-OBJS) $(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(LIB) $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

test:		$(NAME) clean
			$(CC) $(DEBUG) $(CFLAGS) test.c libftprintf.a -o test

debug:		test
			lldb ./test

.PHONY:		all clean fclean re
