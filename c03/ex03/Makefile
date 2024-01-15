NAME = DiamondTrap

src = ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp DiamondTrap.cpp
obj = ${src:.cpp=.o}
headers = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98  -Wshadow
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