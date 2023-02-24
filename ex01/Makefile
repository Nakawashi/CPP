# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 14:00:42 by lgenevey          #+#    #+#              #
#    Updated: 2023/02/24 19:06:36 by lgenevey         ###   ########.fr        #
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

CC			= g++
rm			= rm -rf
OBJS		= $(SRCS_FILES:.c=.o)
CFLAGS		= -Wall -Wextra -Werror
CFLAGS		+= -std=c++98
CFLAGS		+= -pedantic

ifeq ($(DEBUG), 1)
	CFLAGS += -fsanitize=address -g3
endif

## Files ##

SRCS_FILES	=	Phonebook.cpp \
				Contact.cpp \
				main.cpp

## Compiled Files ##

NAME		= phonebook

# ----------------------------------------------------------------------------#

## rules ##

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS_FILES)
	@printf "$(GREEN)$(NAME) compilation OK\n$(NONE)"

$(OBJS): $(SRCS_FILES)
	$(CC) $(CFLAGS) -c $(SRCS_FILES)

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@printf "$(GREEN) OBJS removed\n$(NONE)"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(GREEN) $(NAME) removed.\n$(NONE)"

re: fclean all

.PHONY: all clean fclean re