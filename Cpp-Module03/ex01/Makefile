# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataji <ataji@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 19:55:20 by ataji             #+#    #+#              #
#    Updated: 2022/12/21 23:32:47 by ataji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
INC = ScavTrap.hpp ClapTrap.hpp
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = ClapTrap.cpp\
	main.cpp\
	ScavTrap.cpp
OBJS = $(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $^
%.o:%.cpp $(INC)
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)
fclean:
	$(RM) $(OBJS) $(NAME)
re:fclean all