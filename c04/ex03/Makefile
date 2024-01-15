NAME = game

src =  AMateria.cpp  Cure.cpp  Ice.cpp main.cpp Character.cpp MateriaSource.cpp
obj = ${src:.cpp=.o}
headers = AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp Ice.hpp MateriaSource.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98 
# -fsanitize=address
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