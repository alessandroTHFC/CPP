NAME= customForms
SRC= Bureucrat.cpp AForm.cpp PresidentialPardon.cpp ShrubberyCreation.cpp VasectomyRequest.cpp main.cpp
FLAGS= -Wextra -Werror -Wall -std=c++98

all: $(NAME)

$(NAME):
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo ...Get ready to make some forms...

fclean:
	@rm -f $(NAME)
	@echo ...Lots of shedded forms in the bin, time to take out the trash...

re: fclean all
