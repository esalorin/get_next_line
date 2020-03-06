# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esalorin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 14:22:52 by esalorin          #+#    #+#              #
#    Updated: 2019/11/07 14:35:08 by esalorin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strdup.c ft_strjoin.c ft_strlen.c ft_strchr.c ft_strnew.c ft_strsub.c

OBJ = ft_strdup.o ft_strjoin.o ft_strlen.o ft_strchr.o ft_strnew.o ft_strsub.o

.PHONY: clean fclean all re

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC) -I includes
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

main : re
	gcc -Wall -Wextra -Werror testmain.c get_next_line.c $(NAME)
