NAME= fixedPt2
SRC= main.cpp fixed.cpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@echo ...get ready for FixedPt2
	@g++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo ...fixed ready

clean:
	@rm -f $(OBJ)
	@echo --Object Files Removed--

fclean: clean
	@echo --Removing Executable--
	@rm -f $(NAME)
	@echo --Clean As A Whistle--

re: fclean all