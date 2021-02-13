# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asobreir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 16:43:30 by asobreir          #+#    #+#              #
#    Updated: 2021/02/13 16:54:29 by asobreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

CC=	gcc

FLAGS= -Wall -Wextra -Werror

SRCS= ${wildcard *.c}

OBJS= ${SRCS:.c=.o}

RM = rm -f

.c.o:
	${CC} ${FLAGS} -I include -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean fclean all re

