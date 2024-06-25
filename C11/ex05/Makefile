# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefiile                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboudiba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 02:41:33 by aboudiba          #+#    #+#              #
#    Updated: 2023/09/05 14:08:57 by aboudiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/*.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:
	@${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

