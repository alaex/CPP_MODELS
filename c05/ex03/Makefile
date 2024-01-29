NAME = Bureaucrat

src =	AForm.cpp Bureaucrat.cpp  PresidentialPardonForm.cpp main.cpp RobotomyRequestForm.cpp \
		 ShrubberyCreationForm.cpp Intern.cpp
headers =	AForm.hpp Bureaucrat.hpp  PresidentialPardonForm.hpp RobotomyRequestForm.hpp \
			ShrubberyCreationForm.hpp Intern.hpp
obj = ${src:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++ 
all: ${NAME}

%.o: %.cpp ${headers}
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${obj}
	${CC} ${FLAGS} ${obj} -o ${NAME}
clean:
	rm -rf ${obj}
fclean: clean
	rm -rf ${NAME}
re: fclean all