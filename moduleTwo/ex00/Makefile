NAME= Zombie
SRC= main.cpp zombieClass.cpp newZombie.cpp randomChump.cpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Wextra -Werror -std=c++98

all = $(NAME)

$(NAME): $(OBJ)
	@echo ...Compiling Zombie
	@g++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo ...Go Make Some Zombies

clean: 
	@rm -f $(OBJ)
	@echo --Object Files Removed--

fclean: clean
	@echo --Removing Executable--
	@rm -f $(NAME)
	@echo --Clean As A Whistle--

re: fclean all