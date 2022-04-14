NAME= moarZombies
SRC= main.cpp zombieClass.cpp zombieHorde.cpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@echo ...compiling moarZombies
	@g++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo ...Go Make The Zombie Horde 

clean:
	@rm -f $(OBJ)
	@echo --Object Files Removed--

fclean: clean
	@echo --Removing Executable--
	@rm -f $(NAME)
	@echo --Clean As A Whistle--

re: fclean all