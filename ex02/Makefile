# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 11:31:40 by aelkhali          #+#    #+#              #
#    Updated: 2023/08/03 10:04:13 by aelkhali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Output Program Name
NAME = AbstractClass

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
SRCS = main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp

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