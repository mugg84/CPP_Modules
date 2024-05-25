# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/12 10:07:31 by mmughedd          #+#    #+#              #
#    Updated: 2024/05/25 08:54:38 by mmughedd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := poly00

SRC := main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJ := $(addprefix obj/,$(SRC:.cpp=.o)) 

CC := c++

RM := rm -rf

FLAGS := -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $^ -o $@
	@echo "Build complete!"

obj/%.o: %.cpp
	@mkdir -p $(@D)  
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 

