# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgenevey <lgenevey@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 14:00:42 by lgenevey          #+#    #+#              #
#    Updated: 2023/03/07 10:28:46 by lgenevey         ###   ########.fr        #
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
RM			= rm -rf
OBJS		= $(SRCS_FILES:.cpp=.o)
CXXFLAGS		= -Wall -Wextra -Werror
CXXFLAGS		+= -std=c++98
CXXFLAGS		+= -pedantic # assure la portabilite et conformite des normes

ifeq ($(DEBUG), 1)
	CXXFLAGS += -fsanitize=address -g3
endif

## Files ##

SRCS_FILES	=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp \

## Directories ##

DIR_OBJ		= obj

## Compiled Files ##

NAME		= zombie

# ----------------------------------------------------------------------------#

## rules ##

# specifie que les objets doivent etre pris dans le dossier DIR_OBJ
$(NAME): $(DIR_OBJ) $(addprefix $(DIR_OBJ)/,$(OBJS))
	$(CXX) $(CXXFLAGS) -o $(NAME) $(addprefix $(DIR_OBJ)/,$(OBJS))
	@printf "$(GREEN) $(NAME) compilation OK\n$(NONE)"

# cree le dossier s'il n'existe pas encore
$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

# defini comment generer les objets et les stocker dans le dossoer DIR_OBJ
# $< : premiere dependance de la regle, donc le nom du fichier source .cpp
# $@ : nom de la cible de la regle, ici le nom du fichier objet .o
# -c : les fichiers objets ne sont lies qu'a leur source cpp. Permet de recompiler que les fichiers modifies, pas tout le projet.
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
