# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/04 11:34:01 by aelkhali          #+#    #+#              #
#    Updated: 2023/08/04 16:36:35 by aelkhali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Output Program Name
NAME = testing

# Colors :
GREEN = \033[0;32m
YELLOW = \033[0;33m
RED= \033[0;31m
BLUE = \033[0;34m
STOP = \033[0m

# Commands And Flags :
CPP = c++ 
FLAGS =	-Wall -Wextra -Werror -std=c++98
RM = rm -rf

# loading source files :
SRCS = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp \
		ICharacter.cpp IMateriaSource.cpp MateriaSource.cpp

all : $(NAME)
	@echo "You Can Use $(GREEN)*** $(NAME) ***$(STOP)"

$(NAME) : $(SRCS)
	@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "$(BLUE)Compiling the source files... $(STOP)"

clean :
	@echo "$(YELLOW)Cleaning... $(STOP)"

fclean : clean
	@$(RM) $(NAME)
	@echo "$(RED)Deleting The $(NAME) ... $(STOP)"

re : fclean all