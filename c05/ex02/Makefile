NAME = Bureaucrat

src =	AForm.cpp Bureaucrat.cpp  PresidentialPardonForm.cpp main.cpp RobotomyRequestForm.cpp \
		 ShrubberyCreationForm.cpp
headers =	AForm.hpp Bureaucrat.hpp  PresidentialPardonForm.hpp RobotomyRequestForm.hpp \
			ShrubberyCreationForm.hpp
obj = ${src:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++ 
all: ${NAME}

%.o: %.cpp  Bureaucrat.hpp
	${CC} ${FLAGS} -c $< -o $@
# Shrubbery delete file
${NAME}: ${obj}
	${CC} ${FLAGS} ${obj} -o ${NAME}
clean:
	rm -rf ${obj}
fclean: clean
	rm -rf ${NAME}
re: fclean all