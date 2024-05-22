# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmughedd <mmughedd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/12 10:07:31 by mmughedd          #+#    #+#              #
#    Updated: 2024/05/22 09:40:28 by mmughedd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := fragTrap

SRC := main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ := $(addprefix obj/,$(SRC:.cpp=.o)) 

CC := c++

RM := rm -rf

FLAGS := -g -Wall -Wextra -Werror -std=c++98 -Wshadow

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

