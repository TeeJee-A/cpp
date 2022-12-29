# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataji <ataji@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 19:11:04 by ataji             #+#    #+#              #
#    Updated: 2022/12/27 19:29:50 by ataji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
INC = Conversion.hpp
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = Conversion.cpp main.cpp
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