NAME = phonebook
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $^

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all