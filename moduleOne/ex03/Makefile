NAME= battagliaDiBischero
SRC= main.cpp humanA.cpp HumanB.cpp Weapon.cpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@echo ...compiling BattagliaDiBischero
	@g++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo ...inizia la battaglia

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo --Tutto Pulito Uaglione--

re: fclean all