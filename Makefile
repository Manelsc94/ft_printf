# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 20:18:57 by marvin            #+#    #+#              #
#    Updated: 2024/04/30 20:18:57 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f
LIBC	=	ar -rcs
INC	=	.

SRCS	=	ft_printf.c ft_s_conver.c ft_p_conver.c \
				ft_u_conver.c ft_x_conver.c ft_c_conver.c \
				ft_d_conver.c

LIB_SRCS_OBJS	=	$(SRCS:.c=.o)

.c.o :
	${CC} ${CFLAGS} -c $< -o $@ -I${INC}

$(NAME):	$(LIB_SRCS_OBJS)
#			make bonus -C Libft
#			cp Libft/libft.a $(NAME)
			$(LIBC) $(NAME) $(LIB_SRCS_OBJS)

all:	$(NAME)

clean:
#		make clean -C Libft
		$(RM) -f $(LIB_SRCS_OBJS)

fclean:	clean
#		make clean -C Libft
		$(RM) $(NAME)

re:	fclean all
