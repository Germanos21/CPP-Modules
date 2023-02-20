# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchernys <gchernys@42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 04:46:57 by gchernys          #+#    #+#              #
#    Updated: 2023/02/20 13:31:09 by gchernys         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = contactbook

CC = g++
SRCS =	main.cpp		\
		contacts.cpp	\
		phonebook.cpp
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