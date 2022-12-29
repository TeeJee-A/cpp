# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataji <ataji@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 10:26:12 by ataji             #+#    #+#              #
#    Updated: 2022/12/29 10:26:22 by ataji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RealType
INC = RealType.hpp
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = RealType.cpp main.cpp
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