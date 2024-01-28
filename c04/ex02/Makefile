NAME = Abstruct_Animal

src = Animal.cpp main.cpp Cat.cpp Dog.cpp Brain.cpp WrongAnimal.cpp WrongCat.cpp    WrongDog.cpp
obj = ${src:.cpp=.o}
headers = Animal.hpp Cat.hpp Dog.hpp Brain.hpp  WrongAnimal.hpp WrongCat.hpp    WrongDog.hpp    
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