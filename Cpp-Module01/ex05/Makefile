# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataji <ataji@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 10:12:40 by ataji             #+#    #+#              #
#    Updated: 2022/12/13 10:17:34 by ataji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = Harl.cpp\
	main.cpp

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

re:fclean all