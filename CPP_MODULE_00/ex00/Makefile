# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 04:37:21 by gchernys          #+#    #+#              #
#    Updated: 2023/02/20 13:29:08 by gchernys         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = g++
SRCS = megaphone.cpp
CFLANG = -Wall -Wextra -Werror -std=c++98 -pedantic
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(NAME)

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re