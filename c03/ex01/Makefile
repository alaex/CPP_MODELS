NAME = ScavTrap

src = ClapTrap.cpp main.cpp ScavTrap.cpp
obj = ${src:.cpp=.o}
headers = ClapTrap.hpp ScavTrap.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++ 
all: ${NAME}

%.o: %.cpp  ${headers}
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${obj}
	${CC} ${FLAGS} ${obj} -o ${NAME}
clean:
	rm -rf ${obj}
fclean: clean
	rm -rf ${NAME}
re: fclean all