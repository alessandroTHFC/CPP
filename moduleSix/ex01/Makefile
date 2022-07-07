NAME= fOxckingWithPointers
SRC= main.cpp data.cpp
FLAGS= -Wextra -Werror -Wall -std=c++98

all: $(NAME)

$(NAME):
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo ...here we go

fclean:
	@rm -f $(NAME)
	@echo ...thank fuck thats over, never compile this shit again

re: fclean all
