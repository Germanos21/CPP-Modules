NAME = iter

CXX = c++
SRCS =	main.cpp

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f main.o

fclean:
	rm -f $(NAME)
	rm -f main.o

re: fclean all

.PHONY: all clean fclean re
