# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakawashi <nakawashi@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 14:00:42 by lgenevey          #+#    #+#              #
#    Updated: 2023/06/04 13:55:51 by nakawashi        ###   ########.fr        #
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

CXX			= c++
RM			= rm -rf
OBJS		= $(SRCS_FILES:.cpp=.o)
CXXFLAGS	= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98
CXXFLAGS	+= -pedantic
#CXXFLAGS	+= -Werror-conversion # don't allow demotion conversion. force explicit cast.
#CXXFLAGS	+= -Wshadow
#CXXFLAGS	+= -Wno-shadow

ifeq ($(DEBUG), 1)
	CXXFLAGS += -fsanitize=address -g3
endif

## Files ##

SRCS_FILES	=	main.cpp \

## Directories ##

DIR_OBJ		=	obj

## Compiled Files ##

NAME		=	containers

# ----------------------------------------------------------------------------#

## rules ##

$(NAME): $(DIR_OBJ) $(addprefix $(DIR_OBJ)/,$(OBJS))
	$(CXX) $(CXXFLAGS) -o $(NAME) $(addprefix $(DIR_OBJ)/,$(OBJS))
	@printf "$(GREEN) $(NAME) compilation OK\n$(NONE)"

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

$(DIR_OBJ)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(DIR_OBJ)
	@printf "$(GREEN) $(DIR_OBJ) removed\n$(NONE)"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(GREEN) $(NAME) removed.\n$(NONE)"

re: fclean all

.PHONY: all clean fclean re
