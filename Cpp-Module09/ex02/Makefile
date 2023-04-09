NAME = PmergeMe
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++
SRCS = main.cpp PmergeMe.cpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $^

%.o:%.cpp RmergeMe.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all
