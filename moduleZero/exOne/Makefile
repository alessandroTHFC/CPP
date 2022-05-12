NAME= PhoneBook
SRC= main.cpp\
			Contact.Class.cpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@echo ...Compiling PhoneBook
	@g++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo --PhoneBook Ready-- 

clean:
	@rm -f $(OBJ)
	@echo --Cleaning Object Files--

fclean: clean
	@rm -f $(NAME)
	@echo --Cleaning Executable--

re: fclean all