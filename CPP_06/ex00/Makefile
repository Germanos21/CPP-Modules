SRCS	=	$(shell find . -name "*.cpp")

OBJS	=	${SRCS:.cpp=.o}

CXXFLAGS = -g -std=c++98 -Wall -Wextra -Werror 

NAME	=	convert

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f ${OBJS} 
fclean:	clean
	rm -f $(NAME)
re:	fclean	all

.PHONY:	all clean fclean re
