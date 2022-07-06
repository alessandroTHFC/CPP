NAME= AnimalBrainz
SRC= Brain.cpp Animal.cpp Dog.cpp Cat.cpp main.cpp
FLAGS= -Wextra -Werror -Wall -std=c++98

all: $(NAME)

$(NAME):
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo ...Weather Report says its about to rain Cats & Dogs...

fclean:
	@rm -f $(NAME)
	@echo ...Dog Catcha cleanin up the streetzzz...
re: fclean all