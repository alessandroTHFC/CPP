NAME= PhoneBook
SRC= PhoneBook.cpp\
			Contact.Class.cpp
INC= Contact.Class.hpp
OBJ= $(SRC:.cpp=.o)
FLAGS= -Wall -Wextra -Werror

all: 
	g++ $(FLAGS) $(INC) $(OBJ) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all