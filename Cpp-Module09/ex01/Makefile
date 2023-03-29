NAME = RPN
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++
SRCS = main.cpp RPN.cpp
OBJS = $(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $^

%.o:%.cpp RPN.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all
