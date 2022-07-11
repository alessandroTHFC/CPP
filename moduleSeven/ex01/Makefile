NAME= iter
SRC= main.cpp
FLAGS= -Wextra -Werror -Wall -std=c++98

all: $(NAME)

$(NAME):
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo ...here we go

fclean:
	@rm -f $(NAME)
	@echo ...don't mind me i'm just cleaning up...

re: fclean all
