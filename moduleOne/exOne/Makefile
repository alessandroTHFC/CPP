NAME= PhoneBook
SRC= main.cpp\
			Contact.Class.cpp
INC= Contact.Class.hpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FLAGS) $(INC) $(SRC) 

fclean:
	rm -f $(OBJ)

re: fclean all