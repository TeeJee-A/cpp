# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataji <ataji@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 13:25:08 by ataji             #+#    #+#              #
#    Updated: 2022/12/19 22:11:13 by ataji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Canonical
INC = Fixed.hpp
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = Fixed.cpp\
	main.cpp

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