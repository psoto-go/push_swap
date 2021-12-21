# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 13:53:43 by psoto-go          #+#    #+#              #
#    Updated: 2021/12/21 20:59:25 by psoto-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	srcs/push_swap.c srcs/main.c srcs/parseo.c
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror
MAKE			= make
LIBFT			= libft
NAME			= push_swap

all:			$(NAME)

$(NAME):		$(OBJS)
				$(MAKE) all -C $(LIBFT)
				$(CC) $(CFLAGS) $(OBJS) libft/libft.a -o $(NAME)

clean:
				$(RM) $(OBJS)
				$(MAKE) clean -C ./libft/

fclean:			clean
				$(MAKE) fclean -C ./libft/
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re