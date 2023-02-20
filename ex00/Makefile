# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 14:00:42 by lgenevey          #+#    #+#              #
#    Updated: 2023/02/20 15:34:09 by lgenevey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Colors ##

BLUE	= \033[0;34m
VIOLET	= \033[0;36m
GREEN	= \033[0;32m
RED		= \033[0;31m
YELLOW	= \033[0;33m
NONE	= \033[0m

## Compilation ##

CC			= g++
rm			= rm -rf
OBJS		= $(SRCS_FILES:.c=.o)

CFLAGS		= -Wall -Wextra -Werror
CFLAGS		+= -std=c++98
CFLAGS		+= -pedantic


CFLAGS		+= $(OPTIONS)
INCLUDES	+= -L $(DIR_LIBFT) -lft -L $(DIR_LIBUNIT) -lunit

ifeq ($(DEBUG), 1)
	CFLAGS += -fsanitize=address -g3
endif

## Directories ##

DIR_HEADER	=

## Files ##

SRCS_FILES	=	./megaphone.cpp

## Compiled Files ##

NAME	= megaphone

# ----------------------------------------------------------------------------#

## rules ##

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS_FILES)
	@printf "$(GREEN) END\n$(NONE)"

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