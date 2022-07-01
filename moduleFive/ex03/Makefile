NAME= theIntern
SRC= Bureucrat.cpp AForm.cpp PresidentialPardon.cpp ShrubberyCreation.cpp VasectomyRequest.cpp Intern.cpp main.cpp
FLAGS= -Wextra -Werror -Wall -std=c++98

all: $(NAME)

$(NAME):
	@g++ $(FLAGS) $(SRC) -o $(NAME)
	@echo ...Lets put these Interns to work!...
fclean:
	@rm -f $(NAME)
	@echo ...Lots of shedded forms in the bin, time to take out the trash...
re: fclean all
