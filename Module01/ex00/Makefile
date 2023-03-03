# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 14:00:42 by lgenevey          #+#    #+#              #
#    Updated: 2023/03/03 10:56:31 by nakawashi        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Colors ##

BLUE		= \033[0;34m
VIOLET		= \033[0;36m
GREEN		= \033[0;32m
RED			= \033[0;31m
YELLOW		= \033[0;33m
NONE		= \033[0m

## Compilation ##

CXX			= g++
rm			= rm -rf
OBJS		= $(SRCS_FILES:.cpp=.o)
CXXFLAGS		= -Wall -Wextra -Werror
CXXFLAGS		+= -std=c++98
CXXFLAGS		+= -pedantic

ifeq ($(DEBUG), 1)
	CXXFLAGS += -fsanitize=address -g3
endif

## Files ##

SRCS_FILES	=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp \

## Compiled Files ##

NAME		= zombie

# ----------------------------------------------------------------------------#

## rules ##

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRCS_FILES)
	@printf "$(GREEN)$(NAME) compilation OK\n$(NONE)"

$(OBJS): $(SRCS_FILES)
	$(CXX) $(CXXFLAGS) -c $(SRCS_FILES)

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@printf "$(GREEN) OBJS removed\n$(NONE)"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(GREEN) $(NAME) removed.\n$(NONE)"

re: fclean all

.PHONY: all clean fclean re
