NAME = FragTrap

src = ClapTrap.cpp main.cpp FragTrap.cpp ScavTrap.cpp
headers = ScavTrap.hpp ScavTrap.hpp FragTrap.hpp
obj = ${src:.cpp=.o}

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