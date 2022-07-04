# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkhechoy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 18:55:32 by tkhechoy          #+#    #+#              #
#    Updated: 2022/04/28 20:19:09 by tkhechoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS = $(wildcard *.c)
BSRCS = $(wildcard *ft_lst.c)

OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)

all: ${NAME}

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: ${BOBJS}
	ar rcs ${NAME} ${OBJS} ${BOBJS}
clean:
	${RM} ${OBJS} ${BOBJS}

fclean:clean
	${RM} ${NAME}

re:fclean all

.PHONY: all bonus clean fclean re
