NAME= battleFrag
SRC= main.cpp clapTrap.cpp scavTrap.cpp fragTrap.cpp
FLAGS= -Wextra -Werror -Wall -std=c++98

all: $(NAME)

$(NAME):
	g++ $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all