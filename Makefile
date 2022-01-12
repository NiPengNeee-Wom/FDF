# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yplag <yplag@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/08 05:22:48 by yplag             #+#    #+#              #
#    Updated: 2015/01/08 05:22:53 by yplag            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fdf

LIB		= header.a

RM		= rm -f

CC		= GCC

CFLAGS	= -Wall -Wextra -Werror

LFLAGS	= -L/usr/X11/lib -lmlx -lXext -lX11

SRCS	= main.c\
		  connect.c\
		  get_all.c\
		  listinit.c\
		  point.c\
		  link_points.c

OBJ		= $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) :
	@cd ./libft && make && cd ..
	@$(CC) -c $(SRCS)
	@ar rc $(LIB) $(OBJ)
	@ranlib $(LIB)
	@$(CC) -o $(NAME) $(LIB) libft/libft.a $(CFLAGS) $(LFLAGS)

clean :
	@cd ./libft && make clean && cd ..
	@$(RM) $(OBJ)

fclean : clean
	@cd ./libft && make fclean && cd ..
	@$(RM) $(NAME) $(LIB)

re : fclean all
