NAME = Bureaucrat

src = Bureaucrat.cpp main.cpp Form.cpp  
obj = ${src:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++ 
all: ${NAME}

%.o: %.cpp  Bureaucrat.hpp Form.hpp
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${obj}
	${CC} ${FLAGS} ${obj} -o ${NAME}
clean:
	rm -rf ${obj}
fclean: clean
	rm -rf ${NAME}
re: fclean all