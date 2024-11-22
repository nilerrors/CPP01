# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: senayat <senayat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 22:45:48 by senayat           #+#    #+#              #
#    Updated: 2024/11/22 21:25:19 by senayat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		=	src/main.cpp

OBJS		=	$(SRCS:.cpp=.o)

OBJ_DIR		=	obj
OBJ			=	$(addprefix $(OBJ_DIR)/, $(OBJS))

CPPC		=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98 -g
INC			=

RM			=	rm -f
MKDIR		=	mkdir -p
RMDIR		=	rm -r

NAME		=	betterthansed

$(OBJ_DIR)/%.o: %.cpp
			@$(MKDIR) $(dir $@)
			@printf "Creating object file: $@\n"
			@$(CPPC) -c $(INC) -o $@ $< $(FLAGS) 

all:		$(NAME)

$(NAME):	$(OBJ)
			@printf "Compiling program\n"
			@$(CPPC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
			@printf "Removing object file: %s\n" $(OBJ)
			@$(RM) $(OBJ)
			@$(RMDIR) $(OBJ_DIR)

fclean:		clean
			@printf "Removing program\n"
			@$(RM) $(NAME)

re:			fclean	all

.PHONY:		all	clean	fclean	re
