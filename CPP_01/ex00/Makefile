NAME = BraiiiiiiinnnzzzZ

CC = c++
SRCS =	main.cpp 		\
		Zombie.cpp 		\
		randomChump.cpp \
		newZombie.cpp

CFLAG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re