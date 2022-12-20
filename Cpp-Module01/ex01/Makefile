# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataji <ataji@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/10 14:36:58 by ataji             #+#    #+#              #
#    Updated: 2022/12/10 20:17:55 by ataji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoarBrainz
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp\
	Zombie.cpp\
	zombieHorde.cpp

OBJS = $(SRCS:%.cpp=%.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $^

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re:fclean clean
