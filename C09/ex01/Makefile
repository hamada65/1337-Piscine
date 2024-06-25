# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 22:41:04 by mel-rhay          #+#    #+#              #
#    Updated: 2023/09/06 00:32:29 by mel-rhay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS    = ${SRCS:.c=.o}
INCS    = includes
NAME    = libft.a
LIBC    = ar rc
LIBR    = ranlib
CC      = gcc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all