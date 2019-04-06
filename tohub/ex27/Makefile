# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zhli <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 22:42:09 by zhli              #+#    #+#              #
#    Updated: 2019/04/06 13:42:41 by zhli             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file

SRC		= ft_display_file.c

all: $(NAME)

$(NAME) :
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean:
	rm -f ft_display_file.o 

fclean:
	rm -f $(NAME)

re: fclean all
