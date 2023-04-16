NAME = Animal

CXX = c++
SRCS =	main.cpp	\
		Animal.cpp	\
		Dog.cpp		\
		Cat.cpp		\
		WrongAnimal.cpp	\
		WrongCat.cpp

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