NAME= harl
SRC= main.cpp harl.cpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@echo ...get ready for Harl
	@g++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo ...fat fucker coming

clean:
	@rm -f $(OBJ)
	@echo --Object Files Removed--

fclean: clean
	@echo --Removing Executable--
	@rm -f $(NAME)
	@echo --Clean As A Whistle--

re: fclean all