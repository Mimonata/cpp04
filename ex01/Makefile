# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/13 17:47:50 by spitul            #+#    #+#              #
#    Updated: 2025/06/15 16:38:29 by spitul           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp Brain.cpp
OBJ = $(addprefix obj/, $(SRC:.cpp=.o))
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g
HEADERS = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

NAME = brained

all: $(NAME)

obj/%.o: %.cpp $(HEADERS)
	mkdir -p obj
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
