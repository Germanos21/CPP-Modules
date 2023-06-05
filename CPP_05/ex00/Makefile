NAME = Bureaucrat

CXX = c++
SRCS =	main.cpp		\
		Bureaucrat.cpp	\

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re