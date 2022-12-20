# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ataji <ataji@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 12:03:12 by ataji             #+#    #+#              #
#    Updated: 2022/12/11 12:08:26 by ataji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = UnnecessaryViolence
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRCS = HumanA.cpp\
	HumanB.cpp\
	Weapon.cpp\
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